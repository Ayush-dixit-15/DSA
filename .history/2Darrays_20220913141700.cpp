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



#include<iostream>
using namespace std;
int main(){
int n;
int arr[3][4];
for(int i=0; i<3 ;i++){
    for(int j =0 ;j<4 ;j++){
        cin>>arr[i][j];    }
}
for(int i = 0 ; i<3; i++){
    for(int j =0; j<4; j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<"enter the element to be searched"<<endl;

for(int i = 0 ; i<3; i++){
    for(int j =0; j<4; j++){
       if(arr[i][j]==n){
        cout<<"the element is there in the array at"<<i<<"row and"<<j<<"colum<<endl;
       }
        else{
            cout<<"nai hai bhai"
        }
       
    }
    cout<<endl;
}

return 0;
}