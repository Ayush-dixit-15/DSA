#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
      int data;
      Node* left;
      Node* right;
      Node(int d){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
      }
};
Node* insertToBST(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if( data > root -> data ){
       root->right = insertToBST(root->right, data);
    }
    else{
       root->left = insertToBST(root->left, data);
    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        insertToBST(root, data);
        cin>>data;
    }
}
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
    }

}
int main(){
Node* root = NULL;
cout<<" Enter the data to create the Binary Tree" <<endl;
takeInput(root);  

return 0;
}