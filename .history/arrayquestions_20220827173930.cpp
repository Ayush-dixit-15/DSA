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
#include<iostream>
using namespace std;
int main(){
int arr[100];
int key;
cin>>key;
for (int i = 0; i < count; i++)
{
    /* code */
}

for(int i=0; i<key; i++){
    swap(arr[i],arr[i+1]);
    i+=2;
}
return 0;
}