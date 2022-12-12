#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data ;
    this->left = NULL;
    this->right  = NULL;
  }
};
Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
  if(data > root->data){
    root->right = insertIntoBST(root->right, data);
  }
  else{
    root->left = insertIntoBST(root->left, data);
  }
  return root;
}
void takeInput(Node* &root){
   int data;
   cin>>data;
   while(data!=-1){
    root = insertIntoBST(root, data);
    cin>>data;
   }
}
void LevelOrderTraversal(Node* root){
queue<Node*> tree;
tree.push(root);
tree.push(NULL);
while(!tree.empty()){
    Node* temp = tree.front();
    tree.pop();
    if(temp == NULL){
        cout<< "\t"<<endl;
        if(!tree.empty()){
            tree.push(NULL);
        }
    }
    else{
         cout<<"\t"<<temp->data<<" ";
        if(temp->left){
            tree.push(temp->left);
        }
        if(temp->right){
            tree.push(temp->right);
        }       
    }
 }
}
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}
void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data;
    InOrder(root->right);
}
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;
}
int main(){
Node*root = NULL;
cout<<"Enter data for creation of BST"<<endl;
takeInput(root);
LevelOrderTraversal(root);
preOrder(root);
Inorder(root);
postOrder(root)
return 0;
}