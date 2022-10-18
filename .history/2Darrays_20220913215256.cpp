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
void printSum(int arr[][4], int row, int column){
    for(int i =0; i<row; i++){
        int sum =0;
        for(int j =0; j<column ;j++){
             sum+=arr[row][column];
        }
        cout<<sum<<endl;
    }
}
int main(){
cout<<"enter an array"<<endl;
int arr[3][4];
for(int i=0; i<3 ;i++){
    for(int j =0 ;j<4 ;j++){
        cin>>arr[i][j];    }
}
cout<<"printing the array"<<endl;
for(int i = 0 ; i<3; i++){
    for(int j =0; j<4; j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
printSum(ar, 3,4)
return 0;
}