#include<iostream>
#include<math.h>
using namespace std;
int main(){
int arr1[4] = {1,2,4,5};
int n = 0;
int sum  = 0;
for (int i = 4; i >= 0 ; i--)
{
    sum = sum + arr1[i]*pow(10,n);
    n = n+1;
}
cout<<sum;
return 0;
}