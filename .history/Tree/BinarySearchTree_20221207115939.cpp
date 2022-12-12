#include<iostream>
using namespace std;
class Node{
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data ;
    this->left = NULL;
    this->right  = NULL;
  }
};
void takeInput(Node* &root){
   int data;
   cin>>data;
   while(data!=-1){
    insertIntoBST(root, data);
    cin>>data;
   }
}
int main(){
Node*root = NULL;
cout<<"Enter data for creation of BST"<<endl;
takeInput();
return 0;
}