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
    int data;
    cin>>data;
    root = new Node(data);
    
    if(data = -1){
        return;
    }
    cout<<"enter the data to be inserted in the left of "<< data <<endl;
    root->left =  buildTree(root->left);
      cout<<"enter the data to be inserted in the left of "<< data <<endl;
}
int main(){

return 0;
}