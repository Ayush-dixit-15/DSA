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
int getSum(int arr[], int n)
int main(){
int value =5;
int *p= &value;
// value before
printValue(p);
update(p);
cout<<*p<<endl;
// value after update
cout<<p<<endl;


int arr[5]= {1,2,3,4,5};
cout<<"sum is"<<getSum(arr)<<endl;
return 0;
}