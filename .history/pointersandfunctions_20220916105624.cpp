#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
}
int main(){
int value =5;
int *p=&value;
printValue(p)
return 0;
}