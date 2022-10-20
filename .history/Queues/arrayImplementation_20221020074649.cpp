#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = arr[0];
        rear = arr[0];
    }
    void enqueue(int data){
          if(rear = size){
            cout<<"queue overflow"<<endl;
          }
          else{
             arr[rear] = data;
             rear++;
          }
    }
    int dequeue(){
       if(front<0){
        cout<<"queue underflow"<<endl;
       }
       else{
        arr[front] = -1; 
        front++;
       }
    }
};
int main(){

return 0;
}