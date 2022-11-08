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

int main(){

return 0;
}