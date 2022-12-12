#include<iostream>
using namespace std;
class Node{
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data ;
    this->left = NULL;
    this->right  = NULL;
  }
};
void takeInput(){

}
int main(){
Node*root = NULL;
cout<<"Enter data for creation of BST"<<endl;
takeInput();
return 0;
}