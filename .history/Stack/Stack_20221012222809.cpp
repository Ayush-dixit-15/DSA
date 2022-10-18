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
       if(top<size){
         top++;
         arr[top] = element;
       }
       else{
          cout<<"Stack overflow"<<endl;
       }
    }
    void pop(){
       if(top>=0){
         top--;
       }
       else{
        cout<<"stack underflow"<<endl;
       }
    }
    int peek(){
      if(top>=0&&top<size){
        return arr[top];
      }
      else{
        cout<<"stack is empty"<<endl;
        return -1;
      }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
Stack st(5);
st.push(6);
st.push(4);
st.push(9);
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek();
cout<<st.isEmpty()<<endl;
return 0;
}