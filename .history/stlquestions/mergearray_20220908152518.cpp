#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[] ){
    int  i = 0, j = 0, k =0;
    while( i<n && j<m){
        if(arr1[i]<arr2[j]){
           arr3[k++] = arr1[i++];
        }
        else{
           arr3[k++] = arr2[j++];
        }
    }
    while( i < n){
        // this here denotes that the elements in the second array are exhausted while the first one still have some elements in them. So, we si
        arr3[k++] = arr1[i++];
    }
    while( j < m){
        // this denotes that the elements in the first array are exhausted while the elements in second are still there
        arr3[k++] = arr2[j++];
    }

}
void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
int arr1[5]= {1,3,5,7,9};
int arr2[3] = {2,4,6};
int arr3[8] = {0};

merge(arr1, 5, arr2 ,3 ,arr3);
print(arr3, 8);
return 0;
}