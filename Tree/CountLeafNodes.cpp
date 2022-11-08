#include<iostream>

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    

void Inorder(BinaryTreeNode<int> *root, int& count){
    if(root==NULL){
        return;
    }
    Inorder(root->left, count);
     if(root->left == NULL && root->right==NULL){
         count++;
     }
    Inorder(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count = 0;
    Inorder(root, count);
    return count;
    
}