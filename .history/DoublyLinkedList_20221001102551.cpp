#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
 // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};
void print ( Node* &head){
   Node*temp = head;
   while(temp=NULL){

   }
}
int main(){
Node *node1 = new Node(3);
return 0;
}