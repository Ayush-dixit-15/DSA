#include<iostream>
using namespace std;
int findMaxSum(int *arr, int n){
    int ans = arr[0];
    int fans = 0;
    for (int i = 1; i < n; i++)
    {
        int ans1 = ans;
        ans = ans + arr[i];
          if(ans>fans)
    }
    return fans;
    
}
int main(){
int arr[6] = {1,2,-1,-4,5,6};
cout<<findMaxSum(arr,6);
return 0;
}