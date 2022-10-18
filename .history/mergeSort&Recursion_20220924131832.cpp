
#include<iostream>
using namespace std;
void MergeSort(int *arr, int s, int e){
    //  base case
    if(s>e){
        return ;
    }
    MergeSort(arr,s,mid);
    MergeSort(arr,mid,e);
}
int main(){
int n=5;
int arr[5] = {2,5,9,1,6};
MergeSort(arr, 0 , n-1 );
return 0;
}