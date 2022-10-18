// #include <bits/stdc++.h> 
// void sortedInsert(stack<int> &stack, int num){
//     if( stack.empty()|| (!stack.empty()&& stack.top()<num)){
//         stack.push(num);
//         return;
//     }
//     int n = stack.top();
//     stack.pop();
//     sortedInsert(stack,num);
//     stack.push(n);
// }
// void sortStack(stack<int> &stack)
// {
// 	// base case
//     if(stack.empty()){
//         return;
//     }
//     int num = stack.top();
//     stack.pop();
//     sortStack(stack);
//     sortedInsert(stack,num);
// }


#include<iostream>
#include<stack>
using namespace std;
int main(){
stack <int> st;
st.push(8);
st.push(9);
st.push(1);
st.push(10);
st.push(12);
st.push(7);
return 0;
}