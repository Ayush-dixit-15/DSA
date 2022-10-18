#include<iostream>
using namespace std;
int main(){
// int arr[10] = {1,2,3,4,5,6,7,8,9};
// int temp[10];
// int num =5;
// cout<<"address of first mememory block is "<<arr<<endl;
// cout<<&arr[0]<<endl;
// cout<<arr[0]<<endl;
// cout<<*(arr+6)<<endl; 
// cout<<arr+6<<endl;
// cout<<arr[2]<<endl;
// cout<<*(arr+2)<<endl;
// cout<<sizeof(arr)<<endl;
// int *ptr = &temp[0];
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;
// int a[20] = {1,2,3,4};
// cout<<&a[0]<<endl;
// cout<<&a<<endl;
// cout<<a<<endl;
// int *p = &a[0];
// cout<< p <<endl;       
// cout<< *p <<endl;       
// cout<< &p <<endl;      
// // this means the address of the pointer that the address of the pointer will be returned over here
// int arr[10]={1,2,3,4};
// // arr=arr+1; 
// // not allowed whereas 
// int *t= &arr[0];
// cout<<t<<endl;
// t=t+1;
// cout<<*t<<endl;
// cout<<t<<endl;
// int arr[10]={1,2,3,4,5,6,7,8,9,0};
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl;
// cout<<*arr<<endl;
// int *p = &arr[0];
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<&p<<endl;
// cout<<*p+1<<endl;
// p=p+5;
// // thid declearation wont change the address of the pointer but will change the address where the pointer is pointing to
// cout<<&p<<endl;
// cout<<*p<<endl;
int arr[5]={1,2,3,4,5};
char ch[6] = "abcde";
// this is done because the sixth place will be taken by the null \0 element .
cout<<arr<<endl;
cout<<ch<<endl;
cout<<&ch<<endl;
cout<<&ch[0]<<endl;
char *ptr = &ch[0];
// the pointer needs to be of the 
cout<<ptr<<endl;


return 0;
}