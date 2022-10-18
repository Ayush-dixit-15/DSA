#include<iostream>
using namespace std;
int findJumps(int *arr, int n){
    int i = 0;
    int count = 0;
    while (i<=n)
    {
        int k = arr[i];
        i = i + k;
        count ++;
    }
    return count;
}
int main(){
int arr[11] = {1, 4, 3, 2, 6, 7};
cout<<findJumps(arr,11);
return 0;
}