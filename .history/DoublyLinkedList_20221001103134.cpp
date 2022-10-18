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
// traversing
void print ( Node* &head){
   Node*temp = head;
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp = temp->next;
   }
   cout<<endl;
}
// getting length
int getLength(Node* &head){
    Node*temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void InsertAtHead{()

}
int main(){
Node *node1 = new Node(3);
Node *head  = node1;
print(head);
cout<<getLength(head)<<endl;

return 0;
}