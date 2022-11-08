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
Node* buildTre(Node* root){
    int data;
    cin>>data;
    root = new Node(data);
    
    if(data = -1){
        return;
    }
    cout<<
}
int main(){

return 0;
}