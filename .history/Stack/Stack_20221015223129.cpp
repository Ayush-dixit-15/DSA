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


// using array
// #include<iostream>
// using namespace std;
// class Stack{
//     // PROPERTIES
//     public:
//     int * arr;
//     int top;
//     int size;

//     // behviour 
//     Stack(int size){
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     } 
//     void push(int element){
//        if(size-top>1){
//          top++;
//          arr[top] = element;
//        }
//        else{
//           cout<<"Stack overflow"<<endl;
//        }
//     }
//     void pop(){
//        if(top>=0){
//          top--;
//        }
//        else{
//         cout<<"stack underflow"<<endl;
//        }
//     }
//     int peek(){
//       if(top>=0&&top<size){
//         return arr[top];
//       }
//       else{
//         cout<<"stack is empty"<<endl;
//         return -1;
//       }
//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
// Stack st(5);
// st.push(6);
// st.push(4);
// st.push(9);
// st.push(8);
// st.push(2);
// st.push(1);
// cout<<st.peek()<<endl;
// st.pop();
// cout<<st.peek()<<endl;
// st.pop();
// cout<<st.peek()<<endl;
// st.pop();
// cout<<st.peek()<<endl;
// cout<<st.isEmpty()<<endl;
// return 0;
// }



// linked representation
#include<iostream>
using namespace std;
class Stack{
  public:
  int data;
  Stack* next;
  Stack(int data){
    this->data = data;
    this->next = NULL;
  }
};
Stack* top = NULL;
void push(int data){
  Stack* element = new Stack(data); 
  element->next = top;
  top = element;
}
void print(Stack* top){
  while(top!=NULL){
    cout<<top->data<<" ";
    top = top->next;
  }
}
void pop(){
  top = top->next;
}
void peek(){
  cout<<top->data<<endl;
}
bool isEmpty(){
  if(top==NULL){
    return 1;
  }
  return 0;
}
int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
// print(top);
// peek();
// cout<<endl;
pop();
isEmpty();
pop();
isEmpty();
pop();
pop();
pop();
is
// print(top);
// peek();
return 0;
}