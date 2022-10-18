#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
void update(int*p){
    p = p +1;
    cout<<"p"

}
int main(){
int value =5;
int *p=&value;
printValue(p);
update(p);
return 0;
}