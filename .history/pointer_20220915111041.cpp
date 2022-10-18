#include<iostream>
using namespace std;
int main(){
int num =5;

int *ptr = &num;
cout<<"value"<<*ptr;
cout<<"address"<<ptr;



return 0;
}