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
Node* buildTree(Node* root){
    cout<< "Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to be inserted in the left of "<< data <<endl;
    root->left =  buildTree(root->left);
    cout<<"Enter the data to be inserted in the right of "<< data <<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node* root){
queue<Node*> tree;
tree.push(root);
while(!tree.empty()){
    Node* temp = tree.front();
    cout<<temp->data<<endl;
    tree.pop();
    if(temp->left){
        q.push(temp->left);
    }
    
}
}
int main(){
Node* root = NULL;
root = buildTree(root);
return 0;
}