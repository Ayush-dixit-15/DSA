#include<iostream>
using namespace std;
int findMaxSum(int *arr, int n){
    int ans = arr[0];
    int fans = 0;
    for (int i = 1; i < n; i++)
    {
        int ans1 = ans;
        ans = ans + arr[i];
          if(ans>fans){
            fans = ans;
        }
    }
    return fans;
    
}
int main(){
int arr[6] = {1,2,3,-2,5};
cout<<findMaxSum(arr,6);
return 0;
}