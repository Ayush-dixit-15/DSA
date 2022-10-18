// #include<iostream>
// using namespace std;
// int main(){
//  int arr[3][4] = {1,2,3,4,5,6,7,9,94,2};

//  for(int i = 0; i<3; i++){
//     for(int j=0; j<4; j++){
//     cout<<arr[i][j]<<"\t";
//  }
//     cout<<"\n";
//  }

// return 0;
// }


// searching in an 2 dimensional array
// #include<iostream>
// using namespace std;
// bool isPresent(int arr[3][4] , int target, int row, int column){
//    for(int i = 0 ; i<row; i++){
//     for(int j =0; j<column; j++){
//        if(arr[row][column]== target){
//         return 1;
//        }
//     }
// }
//  return 0;
// }
// int main(){
// int n;
// int arr[3][4];
// for(int i=0; i<3 ;i++){
//     for(int j =0 ;j<4 ;j++){
//         cin>>arr[i][j];    }
// }
// for(int i = 0 ; i<3; i++){
//     for(int j =0; j<4; j++){
//         cout<<arr[i][j]<<"\t";
//     }
//     cout<<endl;
// }
// cout<<"enter the element to be searched"<<endl;
// cin>>n;
// cout<<isPresent(arr,n,3,4);
// return 0;
// }



// summing of each row or row wise sum

// #include<iostream>
// using namespace std;
// // prints row wise sum
// void printSum(int arr[][3], int row, int column){
//     for(int column =0; column<3; column++){
//         int sum =0;
//         for(int row =0; row<3;row++){
//              sum+=arr[row][column];
//         }
//         cout<<sum<<endl;
//     }
//     cout<<endl;
// }

// // to print column wise sum
// void printSum2(int arr[][3], int row, int column){
//     for(int row =0; row<3; row++){
//         int sum =0;
//         for(int column =0; column<3;column++){
//              sum+=arr[row][column];
//         }
//         cout<<sum<<endl;
//     }
//     cout<<endl;
// }

// // largest row sum
// int LargestRowSum(int arr[][3], int row, int column){
//        int maxi = INT32_MIN;
//        int num =-1;
//          for(int row =0; row<3; row++){
//         int sum =0;
//         for(int column =0; column<3;column++){
//              sum+=arr[row][column];
//         }
//         if(sum > maxi){
//              maxi= sum;
//             //  here, i wa doing the mistake of sum=maxi which infact is wrong because it will assign thwe vlaue fo INT_MIN to sum
//             num = row;
//         }
//     }
//     cout<<"the maximum sum is "<<maxi<<endl;
//     return row;
// }
// int main(){
// cout<<"enter an array"<<endl;
// int arr[3][3];
// for(int i=0; i<3 ;i++){
//     for(int j =0 ;j<3 ;j++){
//         cin>>arr[i][j];    }
// }
// cout<<"printing the array"<<endl;
// for(int i = 0 ; i<3; i++){
//     for(int j =0; j<3; j++){
//         cout<<arr[i][j]<<"\t";
//     }
//     cout<<endl;
// }
// printSum(arr, 3,3);
// printSum2(arr, 3,3);
// cout<<LargestRowSum(arr,3,3);
// return 0;
// }






// spiral print
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int row = matrix.size();
//         int col =matrix[0].size();
        
//         int count =0;
//         int total = row*col;
//         int Srow = 0;
//         int Scol = 0;
//         int Erow = row-1;
//         int Ecol = col-1;
//         while(count<total){
// //             printing starting row
//             for ( int i =Scol; count<total&& i<=Ecol ; i++){
//                 ans.push_back(matrix[Srow][i]);
//                 count++;
//             }
//             Srow++;
            
            
// //             printing ending column
//             for( int i = Srow; count<total&&i<=Erow; i++){
//                 ans.push_back(matrix[i][Ecol]);
//                 count++;
//             }
//             Ecol--;
            
//             for(int i = Ecol; count<total&&i>=Scol; i--){
//                 ans.push_back(matrix[Erow][i]);
//                 count++;
//             }
//             Erow--;
            
//             for(int i = Erow; count<total&&i>=Srow; i--){
//                 ans.push_back(matrix[i][Scol]);
//                 count++;
//             }
//             Scol++;
//         }
//         return ans;
//     }
// };


// binary search ina 2d matrix that cannot be reresented in the form of ta linear matrix
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int rowIndex = 0;
//         int colIndex = col -1;
        
//         while(rowIndex< row && colIndex>=0){
//             int element = matrix[rowIndex][colIndex];
//             if(element == target){
//                 return 1;
//             }
//             if(element<target){
//                 rowIndex++;
//             }
//             else{
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };

// rotates an array to 90 degrees
// #include<iostream>
// using namespace std;
// int main(){
// int arr[4][4]={5,1,9,11,2,4,8,10,13,3,6,7,15,14,12,16};
// for(int j =0; j<4; j++){
//     for(int i=3 ; i>=0; i--){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
// }
// return 0;
// }


// counts number of prime numbers before any particular number
// class Solution {
// private:
//     bool isPrime(int n){
//         if(n<=1)
//             return false;
//         for(int i =2; i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     int countPrimes(int n) {
//      int cnt =0;
        
//         for(int i = 2; i<n ;i++){
//             if(isPrime(i))
//                 cnt++;
//         }
//         return cnt++;
//     }
// };





// the most efficient way to do this is the sieve of eratosthenes
// class Solution {
// public:
//     int countPrimes(int n) {
//         int cnt =0;
//         vector<bool> prime(n+1, true);
//         prime[0] = prime[1] = false;
//         for(int i =2; i<n ; i++){
//             if(prime[i]){
//                 cnt++;
//                 for(int j =2*i ; j<n ; j =j+i){
//                     prime[j]= false;
//                 }
//             }
//         }
//         return cnt;
//     }
// };




// greatest common divisor heighest common factor
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the values of a and b"<<endl;
cin>>a>>b;

int ans = gcd(a,b);
cout<<"the ans is"<<ans<<endl;
return 0;
}