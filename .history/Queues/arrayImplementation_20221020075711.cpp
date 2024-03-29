#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront==rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main(){

return 0;
}