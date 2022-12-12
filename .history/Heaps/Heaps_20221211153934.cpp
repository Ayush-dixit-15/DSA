#include<iostream>
using namespace std;
class heap{
   int arr[100];
   int size = 0;
   void insert(int val){
    size  = size + 1;
    int index = size;
    arr[index] = val;
    while(index > 1){
        int parent = index/2;
        if(arr[parent])
    }
   }
};
int main(){

return 0;
}