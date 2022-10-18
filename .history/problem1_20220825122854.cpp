// reverse integer
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin >> n;
int ans=0;

while(n!=0){
    int digit = n%10;
    // this extracts the digits 
    if(( ans> INT32_MAX) || (ans< INT32_MIN)){
        return 0;
    }
    ans = ans + digit*10;
    n =n/10;
}
return ans;
}