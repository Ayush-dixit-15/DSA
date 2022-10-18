#include<iostream>
using namespace std;
int& func(int a){
    int num =a;
    int& ans = num;
    return ansl
}
void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}
int main(){
int i =5;
// //  creating a reference variable
// int &j = i;
// cout<<i<<endl;
// i++;
// cout<<i<<endl;
// j++;
// cout<<i<<endl;
// cout<<j<<endl;
cout<<"whithout reference varibale"<<endl;
update1(i);
cout<<i<<endl;
cout<<"with reference variable"<<endl;
update2(i);
cout<<i<<endl;
return 0;
}