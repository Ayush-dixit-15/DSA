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
void insertToBST(Node* &root, int data){
    if(root == NULL){
        root = new Node
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
takeInput();  

return 0;
}