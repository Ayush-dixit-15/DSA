#include<iostream>
using namespace std;
void update(int n){
    
}
int main(){
int i =5;
//  creating a reference variable
int &j = i;
cout<<i<<endl;
i++;
cout<<i<<endl;
j++;
cout<<i<<endl;
cout<<j<<endl;
return 0;
}