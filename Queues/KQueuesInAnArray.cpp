#include <bits/stdc++.h> 
class NQueue{
public:
    // Initialize your data structure.
    int n;
    int s;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;
    NQueue(int n, int s){
        // Write your code here.
        this->n= n ;
        this->s= s;
        front = new int[n];
         rear = new int[n];
        for(int i = 0; i<n; i++){
            front[i] = -1;
            rear[i] = -1 ;
        }
       
      
        next = new int[s];
        for(int i = 0; i<s; i++){
            next[i] = i+1;
        }
        next[s-1] = -1;
        arr = new int[s];
        freespot = 0;
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        //check overflow
        if(freespot == -1){
            return false;
        }
        int index = freespot;
//         update the freespot
        freespot = next[index];
//         check whether the element to be pushed is the first element of the queue or not
        if(front[m-1] == -1){
            front[m-1] = index;
           
        }
        else{
//             link the new element to the previous one
            next[rear[m-1]] = index;
         }
        next[index] = -1;
        rear[m-1] = index;
        arr[index] = x;
        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        // Write your code here.
        if(front[m-1]==-1){
            return -1;
        }
        int index = front[m-1];
        int val = arr[index];
        front[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return val;
    }
};