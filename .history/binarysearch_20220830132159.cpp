#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int num){
    int start=0;
    int end=size-1;
    int mid = start+ (end-start)/2;
   while (start <= end)
   {
    if(arr[mid]==num){
        return mid;
    }
    if(num>arr[mid]){
        start=mid+1;
    }
    else{
        end = mid-1;
    }
    mid = (start+ (end-start)/2;
   }
  return -1; 
}
int main(){
int arr[8]={1,3,5,6,7,8,9,10};
int index = binarySearch(arr,8,5);
cout<<index<<endl;
return 0;
}