#include<iostream>
using namespace std;
int main(){
int num =5;

int *ptr = &num;
cout<<"value"<<*ptr<<endl;
cout<<"address"<<ptr<<Endl;

double d =4.3;
double *p =&d;
cout<<"value"<<*p<<endl;


return 0;
}