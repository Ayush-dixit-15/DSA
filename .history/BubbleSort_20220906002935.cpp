// this is a very simple sorting technique, in this we simply compare the element
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
int arr[8]={3,4,5,7,1,8,6,2};
BubbleSort(arr ,8);
return 0;
}