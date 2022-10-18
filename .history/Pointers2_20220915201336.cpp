#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,2,3,4,5,6,7,8,9};
int num =5;
cout<<"address of first mememory block is "<<arr<<endl;
cout<<&arr[0]<<endl;
cout<<arr[0]<<endl;
cout<<*(arr+6)<<endl; 
cout<<arr+6<<endl;
cout<<arr[2]<<endl;
cout<<*(arr+2)<<endl;

int i =3;
cout<<
return 0;
}