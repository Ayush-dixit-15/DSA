// to find the reverse of any number simply use the formula ans = digit *10^n + ans
// in order to write a sting in the same sequence use the formula ans = digit*10 + ans
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans= 0;
    int i = 0;
    while ( n ! == 0 )
    {
        int digit = n % 10 ;
        ans = (digit * pow(10, i)) + ans;
        n = n>>1;
        
    }
    

return 0;
}