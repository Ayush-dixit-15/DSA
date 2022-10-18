#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};
void InsertAtTail(Node *tail, int data){
    Node *temp = new Node(10);
    tail->next = temp;
    temp->next = NULL;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = n1;


return 0;
}