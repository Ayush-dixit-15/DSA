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
void InsertAtTail(Node *head, int data){
    Node *temp = new Node(10);
    head->next = temp;
    temp->next = tail
}
int main(){
Node n1(8);

return 0;
}