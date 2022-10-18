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
        cout<<head->data<<" ";
        head = head->next;
    }
    
}
void insertAtTail(Node* &tail, int data){

    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
// iterative method
// Node *reverse(Node* &head){
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *forward = NULL;
//     while(curr!= NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
// recursive method
Node *reverse(Node* &head){
    // Node *prev = NULL;
    // Node *curr = head;
    // Node *forward = NULL;
    // while(curr!= NULL){
    //     forward = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = forward;
    // }
    // return prev;
}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = n1;
insertAtTail(tail,20);
insertAtTail(tail,30);
insertAtTail(tail,40);
insertAtTail(tail,50);
// print(head); 
Node *p = reverse(head);
print(p);
return 0;
}