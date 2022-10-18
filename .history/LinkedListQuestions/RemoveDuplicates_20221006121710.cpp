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
void insertAtTail(Node* &tail, int data){
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
int main(){
Node
return 0;
}