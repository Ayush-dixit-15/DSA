#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node*next;
  Node(int data){
     this->data = data;
     this->next = NULL;

  } 
};
void InsetAtHead(Node* &head, int d){
   Node* temp = new Node(10);
   temp->next = head;
   head= temp;
}
// traversing a linked list
void print(Node* &head){
Node*temp = head;
while(temp!= NULL){
 cout<<temp->data<<endl;
 temp = temp->next;
}
}
int main(){
    // creaTING A NEW NODE
Node *Node1 = new Node(10);
Node* head = Node1;
return 0;
}
