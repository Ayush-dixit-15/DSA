#include<iostream>
using namespace std;
int firstOcuurance(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if (arr[mid] == key ){
            ans = mid;
            end = mid-1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        
        if(arr[mid]<key){
            end = mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return -1;
    
}
int LastOcuurance(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if (arr[mid] == key ){
            ans = mid;
            start = mid+1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        
        if(arr[mid]<key){
            end = mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return -1;
    
}
int main(){
int arr[8]= {1,2,3,3,3,3,5,6}
return 0;
}