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
int arr[11] = {1,3,5,8,9,2,6,7,6,8,9};
findJumps(arr,11);
return 0;
}