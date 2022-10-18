#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int num){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;
    for(int i=0; i<size; i++){
        if(arr[m]<num){
            l=m;
        }
        else if(arr[m]>num){
            u=m;
        }
        else{
            cout<<"the element is found at"<<i<<"position"<<endl;
        }
    }
}
int main(){
int arr[8]={1,3,5,6,7,8,9,10};
binarySearch(arr,8,3);
return 0;
}