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

#include<iostream>
using namespace std;
// prints row wise sum
void printSum(int arr[][3], int row, int column){
    for(int column =0; column<3; column++){
        int sum =0;
        for(int row =0; row<3;row++){
             sum+=arr[row][column];
        }
        cout<<sum<<endl;
    }
}

// to print column wise sum
void printSum2(int arr[][3], int row, int column){
    for(int row =0; row<3; row++){
        int sum =0;
        for(int column =0; column<3;column++){
             sum+=arr[row][column];
        }
        cout<<sum<<endl;
    }
}

// largest row sum
int LargestRowSum(int arr[][3], int row, int column){
       int maxi = INT32_MIN;
         for(int column =0; column<3; column++){
        int sum =0;
        for(int row =0; row<3;row++){
             sum+=arr[row][column];
        }
        if(sum > maxi)
    }
}
int main(){
cout<<"enter an array"<<endl;
int arr[3][3];
for(int i=0; i<3 ;i++){
    for(int j =0 ;j<3 ;j++){
        cin>>arr[i][j];    }
}
cout<<"printing the array"<<endl;
for(int i = 0 ; i<3; i++){
    for(int j =0; j<3; j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
printSum(arr, 3,3);
printSum2(arr, 3,3);
return 0;
}