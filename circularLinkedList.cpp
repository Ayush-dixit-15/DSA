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
            this->next = NULL;
        }
    }
};
void insertNode(Node* &tail, int element, int data){
//    assuming that the element is in the list
   if(tail==NULL){
    // List is empty
    Node* temp = new Node(data);
    tail = temp;
    temp->next = temp;
   }
  else{
    // non empty list
     Node*current = tail;
     while(current->data != element){
        current= current->next;
     }
    //  element found->curr is on the element
    Node *temp = new Node(data);
    temp->next = current->next;
    current->next = temp;
  }
}
void print(Node* &tail){
    Node *temp = tail;
   if(tail==NULL){
    cout<<"list is empty"<<endl;
   }
   do
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   } while (temp!= tail);
   
}
void deleteNode(Node* &tail, int value){
    cout<<endl;
    if(tail==NULL){
        return;
    }
    else{
     Node *prev = tail;
     Node *curr = prev->next;
     while(curr->data!=value){
       prev = curr;
       curr = curr->next;
     }
     prev->next = curr->next;
    //  for one node only
    // needs to be revisited
    if(curr = prev){
        tail = NULL;
    }
    else if (tail ==curr )
     {
        tail = curr->next;
     }
     
     curr->next = NULL;
     delete curr;
  }
   
}
int main(){
Node* tail = NULL;
insertNode(tail,5,3);
insertNode(tail,3,5);
insertNode(tail,5,7);
insertNode(tail,7,9);
insertNode(tail,3,8);
print(tail);
// deleteNode(tail,3);
// print(tail);
return 0;
}