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
void print(Node* &head){
    while (head!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    
}
void insertAtTail(Node* &tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;

    
}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = n1;
insertAtTail(20);
insertAtTail(30);
insertAtTail(20);
insertAtTail(20);
print(head);
return 0;
}