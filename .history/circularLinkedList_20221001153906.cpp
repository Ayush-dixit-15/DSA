#include<iostream>
using namespace std;
class Node{
    public:
    int data;

    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        if(this->next!= NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertNode(Node* &tail, int element, int data){
//    assuming that the element is in the list
   if(tail==NULL){
    // List is empty
    Node* temp = new Node(data);
    tail = temp;
    temp->next = temp;
   }
  else{
    // non empty list
  }
}
int main(){

return 0;
}