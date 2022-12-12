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
    ans.push_back(root->data);
    inorder(root->right, ans);
}
TreeNode<int> *solve(int s, int e, vector<int> ans){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root->left = solve(s, mid-1, ans);
    root->right = solve(mid+1, e , ans);
    return root;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
   vector<int> arr;
   inorder(root1,arr);
   inorder(root2,arr);
   sort(arr.begin(),arr.end());
   TreeNode<int> *root;
   int start=0;
   int end=arr.size()-1;
   
   root=solve(start,end,arr);
   return root;
}