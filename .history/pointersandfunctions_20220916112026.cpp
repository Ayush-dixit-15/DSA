#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
void update(int *p){
    // p = p +1;
    // cout<<p<<endl;
    *p = *p +1;
}
int main(){
int value =5;
int *p= &value;
// value before
printValue(p);
update(p);
cout<<*p<<endl;
// value after
cout<<p<<endl;

return 0;
}