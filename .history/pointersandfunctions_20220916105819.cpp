#include<iostream>
using namespace std;

void main(){
int value =5;
int *p=&value;
printValue(p);

}
void printValue(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}