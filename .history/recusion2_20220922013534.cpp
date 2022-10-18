// reach home
// #include<iostream>
// using namespace std;
// void reachHome(int src, int dest){
//     cout<<"src"<<src<<"dest"<<dest<<endl;
//     // base case
//     if(src==dest){
//         cout<<"aa gya"<<endl;
//         return;
//     }
//     reachHome(src+1, dest);
// }
// int main(){
// int dest = 10;
// int src = 1;
// cout<<endl;
// reachHome(src, dest);
// return 0;
// }


// fibonacci series
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//    if(n==0)
//       return 0;
//    if(n==1)
//       return 1;
    
//     int ans = fibonacci(n-1) + fibonacci(n-2);
//     return ans;
// }
// int main(){
// int n;
// cin>>n;
// int ans =fibonacci(n);
// cout<<ans<<endl;
// return 0;
// }



// count ways to reach nth stair


// int countDistinctWays(int nStairs) {
// //     baseCase 
//     if(nStairs<0)
//         return 0;
//     if(nStairs==0)
//         return 1;
//     int ans = countDistinctWays(nStairs-1)+ countDistinctWays(nStairs-2);
//     return ans;
// }



#include<iostream>
using namespace std;
void sayDigit(int n){
    // base case
    if(n== 0 )
      return;
    //   processing
    int digit = n %10;
    n=n/10;
    
}
int main(){
string arr[10] = {};
int n;
cin>>n;
sayDigit(n); 
return 0;
}