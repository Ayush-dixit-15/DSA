#include<iostream>
using namespace std;
// this cannot be done as it is a very dangerous practise to do it
int& func(int a){
    int num =a;
    int& ans = num;
    // here, we have given ans the reference of num but the scope of num is just limited to this function only because it is a local variable and because of which we shall not return it and its reference as well
    return ans;
    // this is return by reference 
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