// reverse integer
#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
while(n!=0){
    int p = n%10;
    cout<<p;
    n=n/10;
}
return 0;
}