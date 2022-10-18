#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
void update(int*p){
    p = p +1;
    cout<<p<<endl;

}
int main(){
int value =5;
int *p=&value;
printValue(p);
update(p);
cout<<p<<endl;
return 0;
}