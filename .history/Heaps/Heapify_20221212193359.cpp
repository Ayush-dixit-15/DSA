#include<iostream>
using namespace std;
class heap{
  public:
  int arr[100];
  int size;
  heap(){
    arr[0] = -1;
    size = 0;
  }
  void insert(int val){
    size  = size+1;
    int index = size;
    arr[index] = val;
    while(index>1){
        int parent = (index/2);
        if(arr[parent]  < arr[index]){
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
  }
 void deleteFromHeap(){
    
    if(size == 0){
        cout<<"Nothing to delete"<<endl;
        return;
    }
    else{
        int i = 1;
        arr[i] = arr[size];
        size--;
        while(i < size){
        int leftIndex = 2*i ;
        int rightIndex = 2*i +1;
        if(leftIndex<size && arr[])
        }
    }
 }
};
int main(){

return 0;
}