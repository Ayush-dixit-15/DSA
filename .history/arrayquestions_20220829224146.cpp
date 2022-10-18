// to reverse an array
// #include<iostream>
// using namespace std;

// void reverse(int arr[], int n){
//      int start = 0;
//      int end = n-1;
//      while(start<=end){
//       swap(arr[start], arr[end]);
//         start++;
//         end--;
//       }
// }
// void printArray(int arr[], int n){
//   for ( int i=0 ; i<n ;i++){
//     cout << arr[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
// int arr[6]={1,4,0,-5,2,15};
// int brr[5]={2,6,3,9,4};
// reverse(arr,6);
// reverse(brr,5);

// printArray(arr,6);
// printArray(brr,6);
// return 0;
// }












//  swapping alternate elements
// #include<iostream>
// using namespace std;
// void print(int arr[], int n){
//     for( int i=0; i<n ;i++){
//         cout<<arr[i]<<"";
//     }   cout<<endl;
// }
// void swap(int arr[], int size){
//   for( int i=0; i<size; i+=2){
//     if(i+1<size){
//         swap(arr[i],arr[i+1]);
//     }
//   }
// }
// int main(){
// int even[8]= {5,2,9,5,67,8,4,2};
// int odd[5]={1, 2 ,3 ,4 ,5};
// swap(even,8);
// print(even,8);
// swap(odd,5);
// print(odd,5);
// return 0;
// }







//unique element
// an array of M elements such as N=2M+1
// M no of elements are present twice whereas one is once. Find that one number
// int findUnique(int *arr, int size)
// {
//    int ans =0;
//     for(int i=0; i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
// we simply XOR each element with one another in which, the same numbers will become zero and rest will be all that is unique













//finding duplicates
// int findDuplicate(vector<int> &arr) 
// {
//    int ans = 0;
    
//     for( int i=0; i<arr.size(); i++){
//         ans = ans^arr[i];
//     }
//     for(int i =0 ; i<arr.size(); i++){
//         ans =ans^i;
//     }
// 	return ans;
// }











// intersection of two arrays
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int>ans;
// 	for( int i =0; i<n ;i++){
//         int element  =arr1[i];
//         // here, assign an element the value of arr1[i] which then will be compared to each and every element of the second array in orfer to check whether they are equal or not 
//         for(int j =0;j<m ; j++){
//             if(element < arr2[j])
//                 break;
//                 // since the array's are sorted so, if the element is smaller than the element it is being compared of, there is no need to compare it furthurwise.So, it will break the loop.
//             if(element == arr2[j]){
//             ans.push_back(element);
// //                 this is way to print in a vector
//             arr2[j] = -1;
//             // this is done to change the value of matched elelment so that of there is another same value in the second array, it doesnt gets matched with the same number
//                 break;
//            }
//         }
//     }
//     return ans;
// }
// // this can be one of the possible solution to the problem but it contains two loops which increaes its complexity
// this onehere is the maximum optimised solution
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//    int i =0, j =0;
//     vector<int>ans;
//     while(i<n &&j<m){
//         if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if (arr1[i]<arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }
// simply, we appplied three conditions, if the arr1[i]==arr2[j] or it is less or greter than according to which it is done






// the taskis to find the pair which gives the sum s in an array
// #include <bits/stdc++.h> 
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//   vector < vector<int> > ans;
//     for(int i =0; i<arr.size(); i++){
//         for(int j =i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j]==s){
//                 vector<int> temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                 temp.push_back(max(arr[i],arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// in this answer while traversing the array from the first element to the last one , another loop is also made to work from i+1 that checks 