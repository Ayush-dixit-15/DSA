#include<iostream>
using namespace std;
int getnAX(int num[], int size){
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
   int max = INT32_MIN;
   for (int i = 0; i < size; i++)
   {
      if(num[i]>max){
        max = num[i];
      }
   }
   return max;
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i = 0; i<n ; i++){
   cin>>arr[i];
}

return 0;
}