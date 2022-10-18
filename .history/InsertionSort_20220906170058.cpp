// in this sorting technique for every element, we compare the element to each element towards its left if it is greater to that particular element, when we find such a greater element, we shift the element that element oe step 
#include<iostream>
using namespace std;
void InsertionSort( int arr[], int n){
       for(int i=1; i<n; i++){
       int temp=arr[i];
       int j =i-1;
      while(j>=0){
           if(arr[j]> temp){
               arr[j+1] = arr[j];
           }
           else{
               break;
           }
          j--;
       }
       arr[j+1] = temp;
   }
   for (int i = 0; i < n; i++)
   {
    cout<<"\n"<<arr[i];
   }
   
}
int main(){
int arr[9] = { 6,4,3,2,8,9,10,1,5 };
InsertionSort(arr, 9);
return 0;
}