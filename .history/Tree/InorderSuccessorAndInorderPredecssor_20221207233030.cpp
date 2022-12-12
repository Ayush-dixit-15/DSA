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
void InSucPre(Node* root, int key){
    Node* pre = NULL;
    Node* suc = NULL;
    if(root == NULL ){
        return;
    }
    if(root->data = key){
        if(root->left !=NULL){
            Node* temp = root->left;
            while(temp->right){
                temp = temp->right;
                pre = temp;
            }
        }
         if(root->right !=NULL){
            Node* temp = root->left;
            while(temp->right){
                temp = temp->right;
                pre = temp;
            }
        }
    }

}
int main(){
Node* root = NULL;
cout<<"Enter the data for creation of BST"<<endl;
takeInput(root);
Inorder(root);
return 0;
}