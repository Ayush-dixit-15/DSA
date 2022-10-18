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
// bool detectLoop(Node* head){
//     if(head==NULL){
//         return false;
//     }
//     map<Node* ,bool> visited;
//     Node* temp = head;
//    while (temp!= NULL)
//    {
//       if(visited[temp] == true){
//         return 1;
//       }
//        visited[temp] = true;
//        temp = temp->next;
//    }
//    return false;

// }
// floyd cycle detection algo
// bool isCycle(Node* head){
//     if(head == NULL){
//         return false;
//     }
//   Node *i = head;
//   Node *j = head;
//   while(j!=NULL && i!=NULL){
//    j = j->next;
//     if(j!=NULL){
//         j = j->next;
//     }
//     i = i->next;
//     if(i==j){
//         cout<<"at"<<i->data<<endl;
//         return true;
//     }
//   }
//   return false;
// }
// tells the point of intersection of the slow an the fast pointers
Node* isCycle(Node* head){
    if(head == NULL){
        return NULL;
    }
  Node *i = head;
  Node *j = head;
  while(j!=NULL && i!=NULL){
   j = j->next;
    if(j!=NULL){
        j = j->next;
    }
    i = i->next;
    if(i==j){
        cout<<"at"<<i->data<<endl;
        return i;
    }
  }
  return NULL;
}
// this tells the starting loop of the  loop
Node* getStarting(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = isCycle(head);
    Node* slow = head;
    while(slow!=intersection){
        slow=slow->next;
        intersection = intersection->next;
    }
    return slow;
}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = n1;
InsertAtTail(tail,20);
InsertAtTail(tail,15);
InsertAtTail(tail,35);
InsertAtTail(tail,20);
InsertAtTail(tail,40);
tail->next = head->next;
// print(head);
cout<<get(head);


return 0;
}