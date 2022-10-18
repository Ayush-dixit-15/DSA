// #include<iostream>
// using namespace std;

// class Node{
//   public:
//   int data;
//   Node*next;
//   Node(int data){
//      this->data = data;
//      this->next = NULL;

//   } 
// };
// void InsertAtTail(Node* &tail, int d){
//   Node * temp = new Node(d);
//   tail->next = temp;
//  tail= tail->next;
// }
// void insertAtHead(Node* &head, int d){
//    Node* temp = new Node(d);
//    temp->next = head;
//    head= temp;
// }
// // traversing a linked list
// void print(Node* &head){
// Node*temp = head;
// while(temp!= NULL){
//  cout<<temp->data<<endl;
//  temp = temp->next;
// }
// }
// int main(){
//     // creaTING A NEW NODE
// Node *Node1 = new Node(10);
// // head pointing to new node
// Node* head = Node1;
// Node* tail = Node1;
// print(head);
// cout<<"after insertion at head"<<endl;
// insertAtHead(head, 12);
// print(head);
// cout<<"after insertion at the end"<<endl;
// InsertAtTail(tail,15);
// print(head);
// // insertAtHead(head, 15);
// // print(head);
// return 0;
// }



// inserting at middle of a linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->next =NULL;
//     }
// };
// void insertAtHead(Node* &head, int d){
//    Node* temp = new Node(d);
//    temp->next = head;
//    head= temp;
// }
// void InsertAtEnd(Node* &tail, int data){
//     Node *temp = new Node(data);
//     tail ->next =  temp;
//     tail = tail->next;
// }
// void InsertInbetween(int index, int data, Node* &head, Node* &tail){
// // insert at the start
//   if(index==1){
//     insertAtHead(head, data);
//     return ;
//   }
//   Node *temp = head;
//   int cnt = 1;
//   while(cnt<index-1){
//    temp = temp->next;
//    cnt++;
//   }
// //   INSERT AT LAST
//   if(temp->next== NULL){
//     InsertAtEnd(tail,data);
//    return;
//   }
//   Node * temp2 = new Node(data);
//   temp2->next = temp->next;
//   temp->next = temp2;
 
// }
// void print(Node* &head){
//     Node* temp = head;
//     while (temp!= NULL)
//     {
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
    
// }
// int main(){
// Node *Node1 = new Node(10);
// Node*head = Node1;
// Node*tail = Node1;
// InsertAtEnd(tail,10);
// InsertAtEnd(tail,14);
// InsertAtEnd(tail,17);
// InsertAtEnd(tail,19);
// InsertInbetween(6,20,head,tail);
// print(head);
// return 0;
// }




// deletion in a linked list
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
void InsertAtEnd(Node* &tail, int data){
      Node * temp = new Node(data);

}
void print(Node* &head){
    while(head!= NULL){
        cout<<head->data;
        head= head->next;
    }
}
int main(){
Node *N1 = new Node(10);
Node* head = N1;
Node
print(head);

return 0;
}