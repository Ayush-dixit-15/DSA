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
    ~Node(){
       if(this->next!= NULL){
        delete next;
        this->next=NULL;
       }   
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
void InsertAtHead(Node* &tail,Node* &head, int data){
    // handling empty list
    if(head == NULL){
        Node* temp = new Node(data);
        temp->next= head;
        head= temp;
        tail = temp;
    }
    else{
   Node*temp = new Node(data);
   temp->next = head;
   head->prev = temp;
//    temp->prev = NULL;
   head = temp;}
}
void InsertAtTail(Node* &tail,Node* &head, int data){
    if(tail==NULL){
        Node *temp = new Node(data);
        tail=temp;
        head = temp;
    }
    else{
     Node *temp = new Node(data);
     tail->next = temp;
     temp->prev = tail;
    //  temp->next = NULL;
     tail = temp;
    }
}
void InsertAtIndex(Node* &tail,Node* &head, int data, int index){
    if(index==1){
        InsertAtHead(tail,head,data);
        return;
    }
    Node *temp = head;
    int cnt =1;
    while (cnt<index-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,head,data);
        return;
    }
     Node *node = new Node(data);
     node ->next = temp->next;
     temp->next->prev = node;
     temp->next = node;
     node ->prev = temp;

}
void deleteAtHead(int position, Node* &head){
    if(position==1){
    Node *temp = head;
    head= head->next;
    temp->next->prev = NULL;
    temp->next = NULL;
    delete temp;
}
else{
    Node *pre= NULL;
    Node *curr = head;
    int cnt = 1;
    while(cnt<=position){
        pre=curr;
        curr = curr->next;
        
    }
    curr->next->prev= pre;
    pre->next = curr->next;
    delete curr;


    
}
}
int main(){
Node *node1 = new Node(3);
Node *head  = node1;
Node *tail = node1;
print(head);
// cout<<getLength(head)<<endl;
cout<<"inserting at the head"<<endl;
InsertAtHead(tail,head,5);
print(head);
InsertAtHead(tail,head,11);
print(head);
InsertAtHead(tail,head,6);
print(head);
InsertAtHead(tail,head,20);
print(head);
InsertAtTail(tail, head,8);
print(head);
InsertAtTail(tail,head ,22);
print(head);
InsertAtTail(tail, head,1);
print(head);
InsertAtTail(tail,head, 9);
print(head);
InsertAtIndex(tail,head,12,5);
print(head);
deleteAtHead(1,head);
print(head);
return 0;
}
