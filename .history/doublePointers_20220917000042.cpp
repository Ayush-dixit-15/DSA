#include<iostream>
using namespace std;
void update(int **p){
     p = p+1;
     *p = *p+1;
     **p=**p+1;
     
}
int main(){
int i=5;
int *ptr = &i;
int **t = &ptr;
// cout<<"the address stored in the ptr is"<<endl;
// cout<<ptr<<endl;
// cout<<"the address of the ptr itself is going to be"<<endl;
// cout<<&ptr<<endl;
// cout<<"the address stores in the t is:"<<endl;
// cout<<t<<endl;
// cout<<"the address of t is going to be"<<endl;
// cout<<&t<<endl;
// cout<<"the value of t is going to be"<<endl;
// cout<<*t<<endl;
// cout<<**t<<endl;



cout<<i<<endl;
cout<< *ptr<<endl;
cout<< **t<<endl;


cout<<ptr<<endl;
cout<<&i<<endl;
cout<<*t<<endl;


cout<<&ptr<<endl;
cout<<t<<endl;
return 0;
}