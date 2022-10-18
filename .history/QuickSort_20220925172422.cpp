#include<iostream>
using namespace std;
int partiton( int *arr, int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int  i = s+1; i <=e; i++)
    {
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    // place pivot at the right place
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);
    // left and right part
    int i =s , j =e;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<arr[pivotIndex]){
           i++;
        }
        while(arr[j]>pivot){
           j--;
        }
      if(i<pivotIndex&&j>pivotIndex){
        swap(arr[i++],arr[j--]);
      }  
    }
    return pivotIndex;
}
void qucikSort(int *arr, int s, int e){
//   base case
   if(s>=e){
    return;
   }
//    partition
    int p = partiton(arr,s,e);

    // left part
    qucikSort(arr,s,p-1);
    qucikSort(arr,p+1,e);
}
int main(){
int arr[9] = {2,4,1,6,9,8,3,0,5};
int n = 9;
qucikSort(arr, 0, n-1);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}