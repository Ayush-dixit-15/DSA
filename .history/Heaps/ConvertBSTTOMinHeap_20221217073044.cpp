#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

	class BinaryTreeNode {
		
	public :
		int data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;

		BinaryTreeNode(int data) {
		this -> left = NULL;
		this -> right = NULL;
		this -> data = data;
		}
	};

*************************************************************/
void solve(vector<int>& inorder, BinaryTreeNode* root){
    if(root == NULL){
        return;
    }
    solve(inorder, root->left);
    inorder.push_back(root->data);
    solve(inorder, root->right);
}
void buildPreorder(vector<int> inorder, BinaryTreeNode* root, int& index){
    if(root == NULL){
        return;
    }
    root->data = inorder[index++];
    buildPreorder(inorder, root->left, index);
    buildPreorder(inorder, root->right, index);
}
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
    vector<int> inorder;
    solve(inorder, root);
    int index = 0;
    buildPreorder(inorder, root, index);
    return root;
}