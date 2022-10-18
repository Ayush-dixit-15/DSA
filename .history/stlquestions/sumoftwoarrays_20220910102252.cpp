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
    while(carry!=0 ){
        int sum =  carry;
        sum = sum%10;
        carry = sum /10;
        ans.push_back(sum);
    }
    
    int k = 0;
    int l = ans.size()-1;
    while(k<=l){
        swap(ans[k],ans[l]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i]<<endl;
    }
    
}
int main(){
    int arr1[4]={9,9,9,9};
    int arr2[4]={8,8,8,8}
return 0;
}