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
    ~Node(){
        if(this->next!= NULL){
            delete next;
        }
        this->next=NULL;
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
void uniqueSortedList(Node *&head) {
    if(head==NULL){
        return ;
    }
    Node* curr = head;
    while(curr!=NULL){
        if((curr->next!=NULL) && curr->next->data == curr->data){
            Node* nex_nex = curr->next->next;
            Node* todel = curr->next;
            delete(todel);
            curr->next  = nex_nex;
        }
        else{
            curr = curr->next;
        }
    }

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
RemoveDuplicates(head);
print(head);
return 0;
}