// #include<iostream>
// using namespace std;
// int factorial(int n){
//     // base case
//     if(n==0)
//         return 1;
    
//     return n * factorial(n-1);
// }
// int main(){
// int n;
// cin>>n;
// int ans = factorial(n);
// cout<<ans<<endl;
// return 0;
// }

#include<iostream>
using namespace std;
int pow2(int n){
    // base case
    if(n==0){
        return 1 ;
    }
    // recursive function
    int sp = pow2(n-1);
    int bp = 2*sp;
    return 2*pow2(n-1);
}
int main(){
int n; 
cin>>n;
int ans = pow2(n);
cout<<ans<<endl;
return 0;
}