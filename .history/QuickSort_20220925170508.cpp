#include<iostream>
using namespace std;
void qucikSort(int *arr, int s, int e){
//   base case
   if(s>=e){
    return;
   }
//    partition
    int p = partition(arr,s,e);

    // left part
    qucikSort(arr,s,p-1)
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