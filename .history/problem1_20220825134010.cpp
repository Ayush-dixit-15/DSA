// reverse integer
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int ans=0;

// while(n!=0){
//     int digit = n%10;
//     // this extracts the digits 
//     if(( ans> INT32_MAX/10) || (ans< INT32_MIN/10)){
//         return 0;
//     }
//     ans = ans*10 + digit;
//     n =n/10;
// }
// cout<< ans;
// return 0;
// }
// bitwise complement
#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int m =n;
int mask =0;
while(m!=0){
    mask = (mask<<1) | 1;
    m = m>
}
return 0;
}