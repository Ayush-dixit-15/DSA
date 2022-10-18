#include<iostream>
#include<math.h>
using namespace std;
int main(){
int arr1[5] = {1,2,4,5,6};
int n = 0;
int sum  = 0;
for (int i =; i >= 1 ; i--)
{
    sum = sum + arr1[i]*pow(10,n);
    n = n+1;
}
cout<<sum;
return 0;
}