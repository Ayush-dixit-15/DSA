#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node* left;
      Node* right;
      Node(int d){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
      }
};
Node* insertToBST(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if( data > root -> data ){
       root->right = insertToBST(root->right, data);
    }
    if( data > root -> data ){
       root->right = insertToBST(root->right, data);
    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=NULL){
        insertToBST(root, data);
        cin>>data;
    }
}
int main(){
Node* root = NULL;
cout<<" Enter the data to create the Binary Tree" <<endl;
takeInput(root);  

return 0;
}