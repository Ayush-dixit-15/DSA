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
void InsertAtHead(Node* &head, int data){
   Node*temp = new Node(data);
   temp->next = head;
   head->prev = temp;
   temp->prev = NULL;
   head = temp;
}
void InsertAtIndex(Node* &head, int data, int index){
    if(index==1){
        InsertAtHead(head,data);
        return;
    }
    // my code needs to be optimised
    // Node *temp = new Node(data);
    // Node *previ = NULL;
    // Node *curr = head;
    // int cnt =1;
    // while (cnt<index)
    // {
    //     previ = curr;
    //     curr = curr->next;
    //     cnt++;
    // }
    // previ->next = temp;
    // temp->prev= previ;
    // temp->next = curr;
    // curr->prev = temp;
    Node* temp = head;
    int cnt = 1;
    while(cnt<index-1){
        temp = temp->next;
        cnt ++;
    }
    

}
void InsertAtTail(Node* &tail, int data){
     Node *temp = new Node(data);
     tail->next = temp;
     temp->prev = tail;
     temp->next = NULL;
     tail = temp;
}
int main(){
Node *node1 = new Node(3);
Node *head  = node1;
Node *tail = node1;
print(head);
// cout<<getLength(head)<<endl;
cout<<"inserting at the head"<<endl;
InsertAtHead(head,5);
print(head);
InsertAtHead(head,11);
print(head);
InsertAtHead(head,6);
print(head);
InsertAtHead(head,20);
print(head);
InsertAtTail(tail, 8);
print(head);
InsertAtTail(tail, 22);
print(head);
InsertAtTail(tail, 1);
print(head);
InsertAtTail(tail, 9);
print(head);
InsertAtIndex(head,12,5);
print(head);
return 0;
}