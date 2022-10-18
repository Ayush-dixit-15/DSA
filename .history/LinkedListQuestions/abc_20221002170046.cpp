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
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    int abc = k-1;
    int ans = arr[abc];
    return ans;
}
int main(){
int arr[6] = {7 ,10 4 3 20 15};
int ans = kthSmallest(arr,0,5,1);
cout<<ans<<endl;
return 0;
}