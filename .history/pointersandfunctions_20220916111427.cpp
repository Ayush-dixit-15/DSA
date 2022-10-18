#include<iostream>
using namespace std;
void printValue(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
void update(int*p){
    p = p +1;
    cout<<p<<endl;
    *p=*p+1;
     cout<<*p<<endl;

}
int main(){
int value =5;
int *p=&value;
cout<<"earlier the address value will be"<<endl;
printValue(p); 
cout<<"inside the update function the value is going to be"<<endl;
update(p);
return 0;
}