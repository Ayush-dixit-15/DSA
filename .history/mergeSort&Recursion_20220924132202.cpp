
#include<iostream>
using namespace std;
void merge(int *arr, int s, int e){
     int mid  = (s+e)/2;
     int len1 = mid - s+1;
     int len2 = e-mid;
     int *first = new int[len1];
     int *second = new int[len2];
     int k =s ;
     for(int i =0 i<len; i++){
        
     }
}
void MergeSort(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    //  base case
    if(s>e){
        return ;
    }
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
int n=5;
int arr[5] = {2,5,9,1,6};
MergeSort(arr, 0 , n-1 );
return 0;
}