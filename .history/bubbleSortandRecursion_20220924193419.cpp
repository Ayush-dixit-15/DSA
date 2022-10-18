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
// #include<iostream>
// using namespace std;
// void SelecitonSort(int *arr, int n){
// //    base case
//  if(n==0|| n==1){
//     return;
//  }
// int mini = 0;
// int i =0;
// int j=0;
// while(i<n){
//      if(arr[i]<arr[mini]){
//        mini =i;
//   }
//   i++;
// }
// swap(arr[mini],arr[j]);
// SelecitonSort(arr+1,n-1);
// }
// int main(){
// int arr[6] = {6,7,4,8,1,3};
// SelecitonSort(arr,6);
// for (int i = 0; i < 6; i++)
// {
//    cout<<"\t"<<arr[i];
// }

// return 0;
// }



// insertion sort
#include<iostream>
using namespace std;
void InsertionSort(int *arr, int n){
    // base case
    if(n==0||n==1){
        return ;
    }
    int i=n-1;
    int temp = arr[i];
    while(i>=0){
         if(arr[i]>temp){
         
            arr[i+1]=arr[i];
        }
        i--;
    }
      arr[i+1]=temp;
    InsertionSort(arr,n-1);

}
int main(){
int arr[6]={6,5,7,3,8,2,};
InsertionSort(arr,6);
for (int i = 0; i < 6; i++)
{
    cout<<arr[i];
}

return 0;
}