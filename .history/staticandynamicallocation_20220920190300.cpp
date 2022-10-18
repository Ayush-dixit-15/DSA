#include<iostream>
using namespace std;
int main(){
// char ch = 'q';
// cout<<sizeof(ch);
//  char* c = &ch;
//  cout<<sizeof(c)<<endl;
int n;
cin>>n;
int *arr = new int[n];
for(int i= 0; i < n ; i++){
    cin>>arr[i]; 
}

return 0;
}