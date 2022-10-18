#include<iostream>
#include<vector>
using namespace std;
void sumofTwoArrays(int arr1[], int n, int arr2[], int m){
    int i = n-1;
    int j =  m-1;
    vector<int> ans;
    int carry =0 ;
    while (i>=0&&j>=0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1+ val2+ carry; 
        sum = sum%10;
        carry = sum /10;
        ans.push_back(sum);
    } 
    while(i >=0){
        int val1 = arr1[i];
        int sum = val1+ carry;
        sum = sum%10;
        carry = sum /10;
        ans.push_back(sum);
    }
    
    while(j >=0){
        int val2 = arr1[j];
        int sum = val2+ carry;
        sum = sum%10;
        carry = sum /10;
        ans.push_back(sum);
    }
    while(carry)
    
}
int main(){
return 0;
}