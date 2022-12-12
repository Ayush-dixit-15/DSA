#include<iostream>
#include<queue>
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
Node* buildTree(Node* &root){
   int data;
   cout<<"Enter the data"<<endl;
   cin>>data;
   if(root == NULL){
    root = new Node(data);
   } 
   if(data < root->data){
     root->left = buildTree(root->left);
   }
   if(data > root->data){
    root->right = buildTree(root->right);
   }
}
void levelOrderTraversal(Node*root){
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
    Node* temp = q.front();
    q.pop();
   if(temp == NULL){
    cout<<endl;
    if(!q.empty()){
        q.push(NULL);
    }
   }
   if(temp->left){
    q.push(temp->left);
   }
   }
}
int main(){
Node* root = NULL;
return 0;
}