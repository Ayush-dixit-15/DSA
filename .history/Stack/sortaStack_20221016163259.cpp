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
// another approach
#include <bits/stdc++.h> 
void sort(vector <int> &arr, int n){
     for(int i =1; i<n; i++){
        bool swapped  =false;
        for(int j =0 ;j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
//             already sorted
            break;
        }
    
}
}
void sortStack(stack<int> &stack)
{
    vector<int> arr;
    int count =0;
	// Write your code here
    while(!stack.empty()){
     int n = stack.top();
     arr.push_back(n);
     stack.pop();
           count++;
    }
   
    sort(arr,count);
    for(int i=0; i<count; i++){
        int num = arr[i];
        stack.push(num);
    }
}