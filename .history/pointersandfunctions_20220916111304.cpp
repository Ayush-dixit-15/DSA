#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
void update(int*p){
    p = p +1;


}
int main(){
int value =5;
int *p=&value;
COUT<<"earlier the value will be"<
printValue(p); 
update(p);
cout<<p<<endl;
return 0;
}