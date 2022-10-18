#include<iostream>
using namespace std;
void BubbleSort(int arr[], int size){
    for(int i =0; i<size; i++){
        for(int j =0 ;j<size; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
int arr[8]={3,4,5,3,1,4,6}
return 0;
}