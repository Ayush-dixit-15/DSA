// sorting refers to the procedure of arranging our data structure in either increasing or the decreasing order using various algorithmic techniques. There are several  algorihtms to achieve this. The forst one is the selection sort



// in this type of sorting technique, we seek to find the fimd the smalest element in an array and place it on the leftmost part of the array. First at i =0 , we will search for the minimum value of the elements present inthe array and then then, we will place it in i = 0, after that we will search the least element in the subarray i=1->i=n and find the least element, place it in the leftmost part of the araay


#include<iostream>
using namespace std;
void SelectionSort(int arr[], int size){
    for(int i=0; i<size;i++){
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex =j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
int arr[8]
return 0;
}