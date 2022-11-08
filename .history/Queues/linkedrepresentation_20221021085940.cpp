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
void push(int data){
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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
push(5);
push(4);
push(3);
push(7);
push(9);
push(1);
print(front);
pop();
print(front)
return 0;
}