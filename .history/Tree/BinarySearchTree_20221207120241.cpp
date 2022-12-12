#include<iostream>
using namespace std;
class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data ;
    this->left = NULL;
    this->right  = NULL;
  }
};
Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
  if(data > root->data){
    insertIntoBST(root->right)
  }
}
void takeInput(Node* &root){
   int data;
   cin>>data;
   while(data!=-1){
    root = insertIntoBST(root, data);
    cin>>data;
   }
}
int main(){
Node*root = NULL;
cout<<"Enter data for creation of BST"<<endl;
takeInput(root);
return 0;
}