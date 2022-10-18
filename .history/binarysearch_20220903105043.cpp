// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int num){
//     int start=0;
//     int end=size-1;
//     int mid = start+ (end-start)/2;
//     // to handle large integer values
//    while (start <= end)
//    {
//     if(arr[mid]==num){
//         return mid;
//     }
//     else if(num>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end = mid-1;
//     }
//     mid = start+ (end-start)/2;
//    }
//   return -1; 
// }
// int main(){
// int arr[8]={1,3,5,6,7,8,9,10};
// int index = binarySearch(arr,8,5);
// cout<<index<<endl;
// return 0;
// }



// find an element in a sorted rotated array
// int getPivot(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     int mid = start+ (end-start)/2;
//     while(start<end){
//         if(arr[mid]>=arr[0]){
//             start = mid+1;
//         }
//         else{
//             end = mid;
//         }
//         mid = start + (end-start)/2;
//     }
//     return start;
//     }
// int binarySearch(int arr[], int s,int e, int num){
//     int start=s;
//     int end=e;
//     int mid = start+ (end-start)/2;
//     // to handle large integer values
//    while (start <= end)
//    {
//     if(arr[mid]==num){
//         return mid;
//     }
//     else if(num>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end = mid-1;
//     }
//     mid = start+ (end-start)/2;
//    }
//   return -1; 
// }

// int search(int* arr, int n, int key) {
//     int pivot = getPivot(arr ,n);
//      if(key>=arr[pivot] && key<= arr[n-1]){
//          return binarySearch(arr, pivot ,n-1, key);
//      }
//     else{
//         return binarySearch(arr, 0 ,pivot-1, key);
            
//     }
// }




// find sqrt of a gi]ven number
#include<iostream>
using namespace std;

long long int sqrt(int n){
        int s = 0;
        int e  = n;
        long long int mid = s+ (e-s)/2;
        long long int ans =-1;
        while(s<=e){
           long long int square = mid * mid ;
            
            if(square==n){
                return mid;
            }
            else if(square < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else{
                e =mid -1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
    }
double precision(int n, int precision, int tempsol){
     double factor =1;
      for (int i = 0; i < precision; i++)
      {
        factor = factor/10;
        
      }
      
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    int tempSol = sqrt(n);
    cout<<" answer is "<<precision(n,3,tempSol);
return 0;
}