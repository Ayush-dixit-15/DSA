#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        while(index>1){
            int parent = (index/2);
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void RemoveFromHeap(){
         if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
         }
         else{
            int i = 1;
            arr[i] = arr[size];
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            while(i<size){
                if(leftIndex < size && arr[i]< arr[leftIndex]){
                    swap(arr[i], arr[leftInDEX])
                }
            }
         }
    }
};
int main(){

return 0;
}