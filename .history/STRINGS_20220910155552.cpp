// strings are one dimensional character arrays
#include<iostream>
using namespace std;
int getLength(char name[]){
    int count =0;
    int i = 0;
    while(name[i]!='\0'){
        i++;
        count++;
    }
    cout<<"the length of the string is"<<count<<endl;
}

int main(){
char name[20];
cout<<"enter the name"<<endl;
cin>>name;
getLength(name)
return 0;
}