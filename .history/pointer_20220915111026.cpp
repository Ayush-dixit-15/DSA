#include<iostream>
using namespace std;
int main(){
int num =5;
cout<<"the address is goinng to be"<<&num<<endl; 

int *ptr = &num;
cout<<"value"<<*ptr;
cout<<"value"<<ptr;
return 0;
}