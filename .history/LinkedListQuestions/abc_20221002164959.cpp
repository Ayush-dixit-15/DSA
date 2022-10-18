#include<iostream>
using namespace std;
void kthSmallest(int arr[], int l, int r, int k=0) {
    int size = r+1;
   
    for(int i=0; i<size; i++){
         int min =i;
         for (int j = i+1; j < size; j++)
         {
            if(arr[j]<arr[min]){
            min = j;
           }
         }
         swap(arr[i],arr[min]);         
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    int abc = 
}
int main(){
int arr[6] = {6,5,7,4,6,9};
kthSmallest(arr,0,5,3);
return 0;
}