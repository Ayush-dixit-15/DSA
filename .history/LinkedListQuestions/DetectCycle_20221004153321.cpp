#include<iostream>
#include<map>
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
void InsertAtTail(Node *&tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node* ,bool> visited;
    Node* temp = head;
   while (temp!= NULL)
   {
       visited[yemp]
   }
   

}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = n1;
InsertAtTail(tail,20);
InsertAtTail(tail,15);
InsertAtTail(tail,35);
InsertAtTail(tail,27);
InsertAtTail(tail,40);
print(head);


return 0;
}