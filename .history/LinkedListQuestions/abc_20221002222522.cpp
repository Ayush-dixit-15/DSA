#include<iostream>
using namespace std;
int findMaxSum(int *arr, int n){
    int ans = arr[0];
    int fans = 0;
    for (int i = 1; i < n; i++)
    {
        int ans1  = fans;
        ans = ans + arr[i];
        if(ans1>ans){
            fans = ans1;
        }
        else{
            fans = ans;
        }
    }
    return fans;
    
}
int main(){
int arr[6] = {1,2,-1,-4,5,6};
cout<<findMaxSum(arr,6);
return 0;
}