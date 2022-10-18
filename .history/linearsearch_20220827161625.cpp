#include<iostream>
using namespace std;

int main(){
int arr[10]= {5,6,7,8,9,0,1,2,3,5};
cout<<"enter the element to be searched"<<endl;
int kry;
cin>>kry;
bool found = search(arr,10,key);
if(found){
    cout<<"key is there"<<endl;
}
else{
    cout<<"it is not"<<endl;
}
return 0;
}