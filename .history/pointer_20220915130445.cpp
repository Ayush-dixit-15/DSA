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
    // int p
    // pointer to int is created and pointing to some garbage value
// this one is really a very bad practise
// atleast put a zero equals to it
// int *p =0 ;
// cout<<*p<<endl;
// int i=5;
// int *p= 0;
// p = &i;
// cout<<p<<endl;
// cout<<*p<<endl;
int num =5;
int a = num;
a++;
cout<<num<<endl;
// see no change while we simply just copy value of one to another
int *p =0;
 p =&num;
 *p = *p+1;
 cout<<num;
// here, it will result in increase of the value of num as here we are not copying the value but here the [o] 
int i =3;
int 
return 0;
}
