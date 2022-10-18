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
void insertAtTail(Node* &tail){

}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = 
print(head);
return 0;
}