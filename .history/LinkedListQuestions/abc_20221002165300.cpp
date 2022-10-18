#include<iostream>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k=0) {
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
  
    int abc = k;
    int ans = arr[k];
    return ans;
}
int main(){
int arr[6] = {6,5,7,4,6,9};
int ans = kthSmallest(arr,0,5,);
cout<<ans<<endl;
return 0;
}