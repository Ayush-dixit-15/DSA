#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
}
int main(){
int value =5;
int *p=&value;
return 0;
}