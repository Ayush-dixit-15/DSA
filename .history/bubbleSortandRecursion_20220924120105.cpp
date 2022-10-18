#include<iostream>
using namespace std;
void BubbleSort(int *arr, int size){
     if(size==0 || size==1){
         return;
     }
     for (int i = 0; i < size; i++)
     {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
     }
     BubbleSort(arr, size-1);
     
     
}
int main(){
int arr[5] = {5,4,6,3,2};
for (int i = 0; i < 5; i++)
{
    cout<<arr
}

return 0;
}