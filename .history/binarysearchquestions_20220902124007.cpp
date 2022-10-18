#include<iostream>
using namespace std;
int firstOcuurance(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key ){
            ans = mid;
            end = mid-1;
            // we do this in order to make sure that we remain in the left most part of the array , we store the answer that is the mid's position and if get something lesser than that 
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        
        if(arr[mid] > key){
            end = mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return ans;
    
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
int arr[8]= {1,2,3,3,3,3,5,6};
cout<<"first occuranceof the digit 3 is "<<firstOcuurance(arr, 8, 3);
cout<<"last occuranceof the digit 3 is "<<LastOcuurance(arr, 8, 3);
return 0;
}