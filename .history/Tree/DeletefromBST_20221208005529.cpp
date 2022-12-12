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
void delteFromBST(Node* root, int val){
    if(root== NULL){
        return ;
    }
    if(root->data = val){
        // 0 child
        if(root->left)
    }
    else if(root->data > val){
        delteFromBST(root->left , val);
    }
    else{
        delteFromBST(root->right, val);
    }
}
 
int main(){
Node* root = NULL;
cout<<"Enter the data for creation of BST"<<endl;
takeInput(root);
Inorder(root);


return 0;
}