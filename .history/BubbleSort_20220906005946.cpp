// this is a very simple sorting technique, in this we simply compare the element of a index to the element adjoining it or next to it and if we find it greater, swap it with the element and we do this repeatedly till the array is sorted
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
    for (int i = 0; i < size; i++)
    {
        cout<<"\n"<<arr[i];
    }
    
}
int main(){
int arr[8]={10,11,};
BubbleSort(arr ,8);
return 0;
}