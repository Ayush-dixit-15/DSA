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
Node* buildTree(Node* root){
    cout<< "enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    
    if(data = -1){
        return;
    }
    cout<<"enter the data to be inserted in the left of "<< data <<endl;
    root->left =  buildTree(root->left);
    cout<<"enter the data to be inserted in the right of "<< data <<endl;
    root->right = buildTree(root->right);
}
int main(){
Node* root = NULL;
root = buildTree(root);
return 0;
}