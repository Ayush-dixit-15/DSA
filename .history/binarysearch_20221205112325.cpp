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
Node* insertInToBST(Node*root, int data){
    if(root == NULL){
        root  = new Node(data);
        return root;
    }
    if(data>root->data){
        
    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertInToBST(root, data);
        cin>>data;
    }
}
int main(){
    Node* root = NULL;
    cout<<"Enter the data"<<endl;
    takeInput(root);
return 0;
}