#include<iostream>
using namespace std;
int partiton( int *arr, int s, int e){
    
}
void qucikSort(int *arr, int s, int e){
//   base case
   if(s>=e){
    return;
   }
//    partition
    int p = partition(arr,s,e);

    // left part
    qucikSort(arr,s,p-1);
    qucikSort(arr,p+1,e);
}
int main(){
int arr[5] = {2,4,1,6,9};
int n = 5;
qucikSort(arr, 0, n-1);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}