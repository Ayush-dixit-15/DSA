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
        cout<<temp->data<<" "
    }
}
int main(){
Node n1(8);

return 0;
}