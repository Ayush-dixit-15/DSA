#include<iostream>
using namespace std;
int main(){
int i=5;
int *ptr = &i;
int **t = &ptr;
cout<<"the address stored in the ptr is"<<endl;

cout<<&ptr<<endl;
cout<<t<<endl;
cout<<&t<<endl;
cout<<*t<<endl;
return 0;
}