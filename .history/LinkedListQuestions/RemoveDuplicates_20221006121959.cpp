// sorted linked list
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
};
void insertAtTail(int data,Node* &tail){
    Node* temp =  new Node(data);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void RemoveDuplicates(Node* head){
    
}
int main(){
Node* n1 = new Node(10);
Node* head = n1;
Node* tail = n1;
insertAtTail(10,tail);
insertAtTail(30,tail);
insertAtTail(40,tail);
insertAtTail(50,tail);
insertAtTail(60,tail);
insertAtTail(60,tail);
print(head);
return 0;
}