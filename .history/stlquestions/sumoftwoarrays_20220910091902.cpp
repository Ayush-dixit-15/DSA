#include<iostream>
#include<math.h>
using namespace std;
int main(){
int arr1[5] = {1,2,4,5,6};
int n = 411;
int sum  = 0;
for (int i = 0; i < 5 ; i++)
{
    sum = sum + arr1[i]*pow(10,n);
    n = n-1;
}
cout<<sum;
return 0;
}