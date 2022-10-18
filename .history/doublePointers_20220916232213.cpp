#include<iostream>
using namespace std;
int main(){
int i=5;
int *ptr = &i;
int **t = &ptr;
cout<<ptr<<endl;
cout<<t<<endl;
cout<<
return 0;
}