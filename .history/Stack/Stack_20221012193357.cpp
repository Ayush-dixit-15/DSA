// using stl
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// // using stl
// // creating an stack
//   stack<int> s;
// //   push opration 
// s.push(2);
// s.push(5);
// s.push(3);
// s.push(6);
// s.push(1);
// // pop
// s.pop();
// cout<<s.top()<<endl;
// cout<<s.empty()<<endl;
// cout<<s.size()<<endl;
// return 0;
// }


// using class
#include<iostream>
using namespace std;
class Stack{
    // PROPERTIES
    public:
    int * arr;
    int top;
    int size;

    // behviour 
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    } 
    void push(int element){

    }
    void pop(){

    }
    int peek(){

    }
    bool isEmpty(){
        
    }
};
int main(){

return 0;
}