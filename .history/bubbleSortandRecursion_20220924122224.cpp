// #include<iostream>
// using namespace std;
// void BubbleSort(int *arr, int size){
//      if(size==0 || size==1){
//          return;
//      }
//      for (int i = 0; i < size; i++)
//      {
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//      }
//      BubbleSort(arr, size-1);
     
     
// }
// int main(){
// int arr[5] = {5,4,6,3,2};
// BubbleSort(arr,5);
// for (int i = 0; i < 5; i++)
// {
//     cout<<"\t"<<arr[i];
// }

// return 0;
// }




// selection sort
#include<iostream>
using namespace std;
void SelecitonSort(int *arr, int n){
  int mini = 0;
  for (int i = 0; i < n; i++)
  {
     for(int j= i+1; i<n; i++){
        if(arr[j]>arr[mini]){
            j=mini;
            j++;
        }
    }
    swap(arr[mini],arr[i])
  
}}
int main(){
int arr[10] = {9,8,7,6,5,6,4,3,2,1};

return 0;
}