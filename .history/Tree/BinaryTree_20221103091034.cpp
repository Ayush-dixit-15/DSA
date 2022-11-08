#include<iostream>
#include<queue>
#include<stack>
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
void reverseLevelOrderTraversal(Node* root){
    queue<Node*>tree;
    stack<int>st;
    tree.push(root);
    tree.push(NULL);
    while(!tree.empty()){
        Node*temp = tree.front();
        tree.pop();
        if(temp==NULL){
            if(!tree.empty()){
                tree.push(NULL);
                st.push(-1);
            }
        }
        else{
            st.push(temp->data);
            if(temp->left){
               tree.push(temp->left);
            }
            if(temp->right){
                tree.push(temp->right);
            }
        }
    }
    while(!st.empty()){
        int remp = st.top();
        if(remp==-1){
          cout<<endl;
        }
        else{
            cout<<remp<<" ";
        }
        st.pop();
    }
}
void Inorder(Node*root){
    if(root==NULL){
        return ; 
    }
    Inorder(root->left);
    cout<< root->data <<endl;
    Inorder(root->right);
}
void Preorder(Node*root){
    if(root==NULL){
        return ; 
    }
    cout<< root->data <<endl;
    Inorder(root->left);
    Inorder(root->right);
}
void Postorder(Node*root){
    if(root==NULL){
        return ; 
    }
    Inorder(root->left);
    Inorder(root->right);
    cout<< root->data <<endl;
}
int main(){
Node* root = NULL;
root = buildTree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// levelOrderTraversal(root);
// reverseLevelOrderTraversal(root);
cout<<"inorder traversal:"<<endl;

return 0;
}