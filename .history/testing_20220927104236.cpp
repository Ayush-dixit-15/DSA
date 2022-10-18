#include<iostream>
using namespace std;
bool LinearSearch(int *arr, int n, int key){
    if(n==0){
        return false;
    }
    else

}
int main(){
int arr[5]={6,5,4,7,2};
cout<<LinearSearch(arr, 5,6)<<endl;
return 0;
}
// bool LinearSearch(int arr[], int size, int num){
//     print(arr, size);
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==num){
//         return true;
//     }
//     else{
//         bool find = LinearSearch(arr+1, size-1, num);
//         return find;
//     }
    
// }
// int main(){
// int n, num;
// cout<<"enter the size of the array"<<endl;
// cin>>n;
// int *arr = new int[n];
// cout<<"enter the array"<<endl;
// for(int i=0; i<n ;i++){
//     cin>>arr[i];
// }
// cout<<"enter the number you wish to search"<<endl;
// cin>>num;
// cout<<LinearSearch(arr, n, num)<<endl;
// return 0;
// }