// #include<iostream>
// using namespace std;
// void BubbleSort(int *arr, int size){
//      if(size==0 || size==1){
//          return;
//      }
//      for (int i = 0; i < size; i++)
//      {
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//      }
//      BubbleSort(arr, size-1);
     
     
// }
// int main(){
// int arr[5] = {5,4,6,3,2};
// BubbleSort(arr,5);
// for (int i = 0; i < 5; i++)
// {
//     cout<<"\t"<<arr[i];
// }

// return 0;
// }




// selection sort
// #include<iostream>
// using namespace std;
// void SelecitonSort(int *arr, int n){
// //    base case
//  if(n==0|| n==1){
//     return;
//  }
// int mini = 0;
// int i =0;
// int j=0;
// while(i<n){
//      if(arr[i]<arr[mini]){
//        mini =i;
//   }
//   i++;
// }
// swap(arr[mini],arr[j]);
// SelecitonSort(arr+1,n-1);
// }
// int main(){
// int arr[6] = {6,7,4,8,1,3};
// SelecitonSort(arr,6);
// for (int i = 0; i < 6; i++)
// {
//    cout<<"\t"<<arr[i];
// }

// return 0;
// }



#include <iostream>
using namespace std;



void insertionSort(int *arr,int n)
{
	int j;
	
	if (n <= 1)
		return;
		
	insertionSort(arr+1, n - 1);
	
	int key = arr[n - 1];
	j = n - 2;
	
	while (j >= 0 && arr[j] > key)
	{
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = key;
}

int main()
{
     int arr[6] = {4,3,6,5,7,4};
		
	insertionSort(n);
	
	cout << "Array elements after sorting: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
		
	cout << endl;
	
	return 0;
}

