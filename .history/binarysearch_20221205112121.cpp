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
Npde* insertInToBST(Node*root, int data){
    if(root == NULL){
        root  = new Node(data);
        return root;
    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        insertInToBST(root, data);
        cin>>data;
    }
}
int main(){
    Node* root = NULL;
    cout<<"Enter the data"<<endl;
    takeInput(root);
return 0;
}