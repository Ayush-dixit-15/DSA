#include<iostream>
using namespace std;
bool checkSorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }
    for(int i=0;i<size;i++){
    if(arr[i]>arr[i+1]){
        return false;
    }
    else{
        bool ans = checkSorted(arr+1,)
    }
    }
}
int main(){
int *arr = new int[10];
for(int i = 0; i<10; i++){
    cin>>arr[i];
}
for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}
checkSorted(arr, 10);
return 0;
}