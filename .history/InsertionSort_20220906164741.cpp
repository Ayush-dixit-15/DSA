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
int arr[9] = { 6 ,4 3, 2}
return 0;
}