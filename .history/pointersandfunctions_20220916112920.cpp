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
int getSum(int *arr , int n){
    int sum = 0;
    cout<<endl;
    cout<< "size of array is"<<sizeof(arr)<<endl;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
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
cout<<"sum is "<<getSum(arr , 5)<<endl;
return 0;
}