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
Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
  
    if(data>root->data){
        root->right = insertIntoBST(root->right, data);
    }
      else{
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
       root =  insertIntoBST(root, data);
       cin>>data;
    }
}
void Inorder(Node* root){
  if(root == NULL ){
    return;
  }
  Inorder(root->left);
  cout<<"\t"<<root->data;
  Inorder(root->right);
}
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}
void deleteFromBST(Node* root, int val){
    if(root== NULL){
        return ;
    }
    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            // return NULL;
        }
        // 1 chid
        // left child
        if(root->left!= NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            // return temp;
        }
        // right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            // return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
             deleteFromBST(root->right, mini);
            // return root;
        }
    }
    else if(root->data > val){
       deleteFromBST(root->left , val);
        
    }
    else{
     deleteFromBST(root->right, val);
        
    }
}
 
int main(){
Node* root = NULL;
cout<<"Enter the data for creation of BST"<<endl;
takeInput(root);
Inorder(root);
root =  deleteFromBST(root,30);
cout<<endl;
Inorder(root);
return 0;
}