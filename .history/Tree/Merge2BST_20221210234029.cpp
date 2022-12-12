#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/
void inorder(TreeNode<int> *&root, vector<int>& ans){
    if(root == NULL){
        return;
    }
    inorder(root->left, ans);
    ans.push_back_(root->data);
    inorder(root->right, ans);
}
TreeNode<int> *solve(int s, int e, vector<int> ans){
    int mid = (s+e)/2;
    TreeNode<int> * root = new TreeNode<int>(ans[mid]);
    root->left = solve(s, mid-1, ans);
    root->right = solve(mid+1, e , ans);
    return root;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
    vector<int> ans1;
    vector<int> ans2;
    vector<int> ans;
    inorder(root1,ans1);
    inorder(root2,ans2);
    int i , j = 0;
    while( i < ans1.size() && j < ans2.size() ){
        if(ans1[i]<ans2[j]){
            ans.push_back(ans1[i++]);
        }
        if(ans1[i]>ans2[j]){
            ans.push_back(ans2[j++]);
         }
    }
    while(i<ans1.size()){
        ans.push_back(ans1[i++]);
    }
    while(j<ans2.size()){
        ans.push_back(ans2[j++]);
    }
    return solve( 0 , ans.size()-1, ans);
}