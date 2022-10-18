// first and last occurance of a particular element in the array
// #include<iostream>
// using namespace std;
// int firstOcc(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end-start)/2;
//     int ans = -1;
//     while (start<=end)
//     {
//         if (arr[mid] == key ){
//             ans = mid;
//             end = mid-1;
//         }
//         else if( key > arr[mid] ){
//             start = mid+1;
//         }
        
//         else if( key< arr[mid] ){
//             end = mid-1;
//         }
//         mid = start+ (end-start)/2;
//     }
//     return ans;
    
// }
// int lastOcc(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int ans = -1;
//     while (start<=end)
//     {
//         if (arr[mid] == key ){
//             ans = mid;
//             start = mid+1;
//         }
//         else if(key > arr[mid]){
//             start = mid+1;
//         }
        
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         mid = start+ (end-start)/2;
//     }
//     return ans;
    
// }
// int main()
// {
//     int arr[8]={1,2,3,3,3,5,6,3};
//     cout<<"the first occurance of 3 is "<<firstOcc(arr, 8 , 3)<<endl;
//     cout<<"the first occurance of 3 is "<<lastOcc(arr, 8 , 3)<<endl;

//     return 0 ;
// }




// peak index in mountain array
// using linear search
// #include<iostream>
// using namespace std;
// int findElement(int arr[], int size){
//     int answer = 1;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     cout<<"the biggest element in the array is"<<arr[size-1];
// }
// int main(){
// int arr[3]={0,1,0};
// findElement(arr,8);
// return 0;
// }

// using  binary search
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int s = 0;
//     int e = arr.size()-1;
//     int mid= s + (e-s)/2;
        
//         while(s<e){
//            if(arr[mid]<arr[mid+1]){
//                s = mid+1;
//            } 
//           else{
//               e = mid;
//           }
//             mid = s + (e-s)/2;
//         }
//         return s;
//     }
// };



// get pivot element in an array
#include<iostream>
using namespace std;
int getPivot(int arr[], int)
int main(){

return 0;
}