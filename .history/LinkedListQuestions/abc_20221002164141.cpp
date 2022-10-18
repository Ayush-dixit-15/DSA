#include<iostream>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k) {
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
        /* code */
    }
    
}
int main(){

return 0;
}