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
while(temp0)
}
int main(){
Node *Node1 = new Node(10);
cout<<Node1->data<<endl;
cout<<Node1->next<<endl;
return 0;
}
