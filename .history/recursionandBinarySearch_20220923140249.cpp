// checking if the array is sorted
// #include<iostream>
// using namespace std;
// bool checkSorted(int arr[], int size){
    // base case
//     if(size==0||size==1){
//         return true;
//     }
//     for(int i=0;i<size;i++){
//     if(arr[i]>arr[i+1]){
//         return false;
//     }
//     else{
//         bool ans = checkSorted(arr+1, size-1);
//     }
//     }
//     return true;
// }
// int main(){
// int *arr = new int[10];
// for(int i = 0; i<10; i++){
//     cin>>arr[i];
// }
// for (int i = 0; i < 10; i++)
// {
//     cout<<arr[i]<<endl;
// }
// cout<<checkSorted(arr, 10)<<endl;
// return 0;
// }



// calculating the sum of an array wth of recursion
#include<iostream>
using namespace std;
int sum(int arr[], int size){
    int ans =0;
    if(size==0){
        return 0;
    }
    if()
}
int main(){
int n;
cout<<"enter the size of the array"<<endl;
cin>>n;
int *arr  = new int[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}
cout<<"the sum is"<<sum(arr,n)<<endl;
return 0;
}