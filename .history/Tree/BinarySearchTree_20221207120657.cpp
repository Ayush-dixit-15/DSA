#include<iostream>
#include<queue>
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
    root->right = insertIntoBST(root->right, data);
  }
  else{
    root->left = insertIntoBST(root->left, data);
  }
  return root;
}
void takeInput(Node* &root){
   int data;
   cin>>data;
   while(data!=-1){
    root = insertIntoBST(root, data);
    cin>>data;
   }
}
void LevelOrderTraversal(Node* root){
   queue<Node*> q;
   q.push(NULL);
   q.push(NULL);
}
int main(){
Node*root = NULL;
cout<<"Enter data for creation of BST"<<endl;
takeInput(root);
return 0;
}