// this is a very simple sorting technique, in this we simply compare the element of a index to the element adjoining it or next to it and if we find it greater, swap it with the element and we do this repeatedly till the array is sorted
#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){
    for(int i =1; i<n; i++){
        bool swapped  =false;
        for(int j =0 ;j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
//             already sorted
            break;
        }
    
}
int main(){
int arr[8]={15,11,23,77,55,33,66,22};
BubbleSort(arr ,8);
return 0;
}