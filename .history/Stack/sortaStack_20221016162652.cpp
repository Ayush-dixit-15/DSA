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
void sortA(int * arr, int size){
        for(int i=0; i<size; i++){
        for(int j=0; j<size-i;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void sort(stack<int> &stack){
    int count =0;
	// Write your code here
    while(!stack.empty()){
     stack.pop();
           count++;
    }
    int *arr = new int[count];
    sortA(arr,count);
    for(int i=0; i<count; i++){
        int num = arr[i];
        stack.push(num);
    }
}
void print(stack<int> stack){
    while(sta)
}
int main(){
stack <int> st;
st.push(8);
st.push(9);
st.push(1);
st.push(10);
st.push(12);
st.push(7);
sort(st);
return 0;
}