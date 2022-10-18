#include<iostream>
using namespace std;
int getmAX(int num[], int size){
   int max = INT32_MIN;
   for (int i = 0; i < size; i++)
   {
      if(num[i]>max){
        max = num[i];
      }
   }
   return max;
}
int getmin(int num[], int size){
   int MIN = INT32_MAX;
   for (int i = 0; i < size; i++)
   {
      if(num[i]<MIN){
        MIN = num[i];
      }
   }
   return MIN;
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i = 0; i<n ; i++){
   cin>>arr[i];
}
cout<<"maximum vaue is" << getmAX(arr ,n);
cout<<"minimum vaue is" << getmin(arr ,n);
return 0;
}