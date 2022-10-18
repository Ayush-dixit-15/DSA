// strings are one dimensional character arrays




// GET LENGTH OF ANY STRING 
// #include<iostream>
// using namespace std;
// int getLength(char name[]){
//     int count =0;
//     int i = 0;
//     while(name[i]!='\0'){
//         i++;
//         count++;
//     }
//     cout<<"the length of the string is"<<count<<endl;
// }

// int main(){
// char name[20];
// cout<<"enter the name"<<endl;
// cin>>name;
// getLength(name);
// return 0;
// }



// REVERSE STRING
#include<iostream>
using namespace std;
int getLength(char name[]){
    int count =0;
    int i = 0;
    while(name[i]!='\0'){
        i++;
        count++;
    }
    return count;
}
int reverse(char name[], int n){
    int i =0;
    int j = n;
   while (i<=j)
   {
    swap(name[i],name[j]);
   }
   cout<<
   
}
int main(){
char name[20];
cout<<"enter your name"<<endl;
cin>>name;
int n = getLength(name);
return 0;
}