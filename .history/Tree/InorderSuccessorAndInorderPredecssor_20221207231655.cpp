#include<iostream>
using namespace std;
class Node{
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

}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
       root =  insertIntoBST(root, data);
       cin>>data;
    }
}
int main(){
Node* root = NULL;
cout<<"Enter the data for creation of BST"<<endl;
takeInput(root);
return 0;
}