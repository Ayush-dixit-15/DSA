#include<iostream>
using namespace std;
void kthSmallest(int arr[], int l, int r, int k=0) {
    int size = r+1;
    int min =0;
    for(int i=0; i<size; i++){
         for (int j = i+1; i < size; i++)
         {
            if(arr[min]>arr[j]);
            min = j;
         }
         swap(arr[i],arr[min]);         
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
int arr[6] = {6,5,7,4,6,9};
kthSmallest(arr,0,5);
return 0;
}