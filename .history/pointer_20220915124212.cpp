// #include<iostream>
// using namespace std;
// int main(){
// int num =5;

// int *ptr = &num;
// cout<<"value"<<*ptr<<endl;
// // it is the d-reference operator that has the same value as the address to which the pointer is currently pointing
// cout<<"address"<<ptr<<endl;
// // this stores address of num

// double d =4.3;
// double *p =&d;
// cout<<"value"<<*p<<endl;
// cout<<"address"<<p<<endl;
// cout<<sizeof(num)<<endl;
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(p)<<endl;
// cout<<sizeof(*p)<<endl;
// cout<<sizeof(d)<<endl;




// return 0;
// }


#include<iostream>
using namespace std;
int main(){
    // pointer to int is created and pointing to some garbage value
int *p =0 ;
cout<<*p<<endl;
// this one is really a very bad practise
return 0;
}