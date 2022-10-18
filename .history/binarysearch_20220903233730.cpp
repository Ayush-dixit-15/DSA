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
// #include<iostream>
// using namespace std;

// long long int sqrt(int n){
//         int s = 0;
//         int e  = n;
//         long long int mid = s+ (e-s)/2;
//         long long int ans =-1;
//         while(s<=e){
//            long long int square = mid * mid ;
            
//             if(square==n){
//                 return mid;
//             }
//             else if(square < n)
//             {
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else{
//                 e =mid -1;
//             }
//             mid = s +(e-s)/2;
//         }
//         return ans;
//     }
// double morePrecision(int n, int precision, int tempsol){
//      double factor = 1;
//      double ans = tempsol;
//       for (int i = 0; i <precision; i++)
//       {
//         factor = factor/10;
//         for(double j =ans ; j*j<n; j = j+ factor){
//              ans = j;
//         }
//       }
//       return ans;
      
// }
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int tempSol = sqrt(n);
//     cout<<" answer is "<<morePrecision(n,3,tempSol)<<endl;
// return 0;
// }





// book allocation problem
// bool isPossible(vector<int> arr, int n , int m, int mid){
//     int studentCount = 1;
//     int pageSum =0;
//     for (int i=0; i<n; i++){
//         if(pageSum + arr[i] <=mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount++;
//             if( studentCount>m || arr[i]>mid){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0 ;
//     int sum =0;
//     for (int i =0; i<n; i++){
//         sum+=arr[i];
//     }
//     int e = sum;
//     int ans = -1; 
//     int mid = s + (e-s)/2;
    
    
//     while(s<=e){
//         if(isPossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid = s + (e-s)/2;
//      }
//     return ans;
// }