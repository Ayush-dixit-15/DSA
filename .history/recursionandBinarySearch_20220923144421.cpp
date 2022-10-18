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
// #include<iostream>
// using namespace std;
// int sum(int arr[], int size){
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }
//     int s1  = sum(arr+1,size-1);
//     int s2 = arr[0]+ s1;
//     return s2;
  
// }
// int main(){
// int n;
// cout<<"enter the size of the array"<<endl;
// cin>>n;
// int *arr  = new int[n];
// for(int i=0; i<n;i++){
//     cin>>arr[i];
// }
// cout<<"the sum is"<<sum(arr,n)<<endl;
// return 0;
// }



// linear search using recursion
// #include<iostream>
// using namespace std;
// void print (int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
// }
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




// binary searach using the recursion

#include<iostream>
using namespace std;
bool BinarySearch(int arr[], int n,int num){
    if(n == 0){
        return false;
    }
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    if(arr[mid]==num){
        return true; 
    }
    else if(arr[mid]>num){
       BinarySearch(ar)
    }
}
int main(){
int n; int num;
cout<<"enter the size of the array"<<endl;
cin>>n;
int *arr = new int[n];
for(int i =0; i<n ;i++){
    cin>>arr[i];
}
cout<<"enter the number you wish to search for"<<endl;
cin>>num;
cout<<BinarySearch(arr, n,num)<<endl;
return 0;
}