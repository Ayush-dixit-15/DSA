#include<iostream>
using namespace std;
int main(){
int arr[10] = { 5 ,7, 2 , 5 ,6 ,7, 1,3,4,9};
int n;
int count=0;
cout<<"enter the number u want to find";
cin>>n;
for (int i=0;i<10;i++){
   if(arr[i]=n){
    count++;
   }
}
return 0;
}