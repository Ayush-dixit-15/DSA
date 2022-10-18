#include<iostream>
using namespace std;
int main(){
int num =5;

int *ptr = &num;
cout<<"value"<<*ptr<<endl;
// it is the d-reference operator that has the same value as the address to which the pointer is currently pointing
cout<<"address"<<ptr<<endl;
// this st

double d =4.3;
double *p =&d;
cout<<"value"<<*p<<endl;
cout<<"address"<<p<<endl;
cout<<sizeof(num)<<endl;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(p)<<endl;
cout<<sizeof(*p)<<endl;
cout<<sizeof(d)<<endl;




return 0;
}