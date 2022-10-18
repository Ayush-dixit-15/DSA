// to find the reverse of any number simply use the formula ans = digit *10^n + ans
// in order to write a sting in the same sequence use the formula ans = digit*10 + ans
// this code is for conversion of binary to decimal and vice versa
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans= 0;
    int i = 0;
    while ( n!=0 )
    // this means till the binary of the number does not becomes 0
    {
        int digit = n & 1 ;
        // this is done beacause the 
        ans = (digit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<< "Answer is "<< ans <<endl;
    

return 0;
}