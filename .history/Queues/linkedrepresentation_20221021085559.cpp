#include<iostream>
using namespace std;
class Queue{
   public:
   int data;
   Queue* next;
   Queue(int data){
      this->data = data;
      this->next = NULL;
   }
};
   Queue* front =NULL;
   Queue* back =NULL;
void insert(int data){
    Queue* node = new Queue(data);
   if(front==NULL){
       front = node;
       back = node;
   }
   else{
    back->next = node;
     back = node;
   }
}
void pop(){
    if(front==back){
        cout<<"the queue is empty"<<endl;
    }
    else{
        front = front->next;
    }
}
void print(Queue*front){
    Queue* temp = front;
    while(temp!=back){
        cout<<temp->data<<" ";
    }
}
int main(){
insert(5);
insert(5);
insert(5);
insert(5);
insert(5);
insert(5);
return 0;
}