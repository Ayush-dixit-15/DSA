#include<iostream>
using namespace std;
class Node{
public:
 int data;
 Node* left;
 Node* right;
 Node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
 }
};
Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
  
    if(data>root->data){
        root->right = insertIntoBST(root->right, data);
    }
      else{
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
       root =  insertIntoBST(root, data);
       cin>>data;
    }
}
void Inorder(Node* root){
  if(root == NULL ){
    return;
  }
  Inorder(root->left);
  cout<<"\t"<<root->data;
  Inorder(root->right);
}
void findPreSuc(Node* root , Node*& pre, Node*& suc , int key)
{
    // Base case
    if (root == NULL)  return ;
 
    // If key is present at root
    if (root->data == key)
    {
        // the maximum value in left subtree is predecessor
        if (root->left != NULL)
        {
            Node* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }
 
        // the minimum value in right subtree is successor
        if (root->right != NULL)
        {
            Node* tmp = root->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }
 
    // If key is smaller than root's key, go to left subtree
    if (root->data > key)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    else // go to right subtree
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }
}
 
int main(){
Node* root = NULL;
cout<<"Enter the data for creation of BST"<<endl;
takeInput(root);
Inorder(root);
int key = 5;
Node *pre = NULL;
Node *suc = NULL;
findPreSuc(root, pre, suc , key);
 if (pre != NULL)
      cout << "Predecessor is " << pre->data << endl;
    else
      cout << "No Predecessor";
 
    if (suc != NULL)
      cout << "Successor is " << suc->data;
    else
      cout << "No Successor";
return 0;
}







#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    pair<int, int> ans;
    BinaryTreeNode*<T> suc = NULL;
    if(root == NULL){
        return ans;
    }
    if(root->data == key ){
        if(root->left!=NULL){
            BinaryTreeNode*<T> temp = root->left;
        while(temp->right){
            BinaryTreeNode*<T> temp = temp->right;
            pre = temp;
        }
        }
        if(root->right!=NULL){
            BinaryTreeNode*<T> temp = root->right;
        
        while(temp->left){
            BinaryTreeNode*<T> temp= temp->left
                suc = temp;
        }
        }
    }
    if(root->data > key){
        suc = root
        predecessorSuccessor(root->left,key);
    }
     else{
         pre = root
        predecessorSuccessor(root->right,key);
       }
    ans.first = pre->data;
    ans.second = suc->data;
    returna ans;
}
