#include<iostream>
using namespace std;
class Queue{
   public:
   int data;
   Queue* front;
   Queue* back;
   Queue* next;
   Queue(int data){
      this->data = data;
      this->next = NULL;
   }
};
void insert(int data);
int main(){

return 0;
}