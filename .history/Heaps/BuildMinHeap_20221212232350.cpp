#include <bits/stdc++.h> 
void minHeap(vector<int> &arr, int i, int n){
    int minimum = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left<n && arr[left] < arr[minimum]){
        minimum = left;
    }
     if(right<n && arr[right] < arr[minimum]){
       minimum = right;
     }
    if(minimum!=i){
        swap(arr[i], arr[minimum]);
        minHeap(arr, minimum, n);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    for(int i = n/2-1; i>=0; i--){
        minHeap(arr, i, n );
    }
    return arr;
}
