#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int num){
    int l=1;
    int u=size;
    int m = (l+u)/2;
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
return 0;
}