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
// #include<iostream>
// using namespace std;
// int getLength(char name[]){
//     int count =0;
//     int i = 0;
//     while(name[i]!='\0'){
//         i++;
//         count++;
//     }
//     return count;
// }
// void reverse(char name[], int n){
//     int i =0;
//     int j = n-1;
//    while (i<j)
//    {
//     swap(name[i],name[j]);
//     i++;
//     j--;
//    }
//    cout<<name<<endl;
// }
// int main(){
// char name[20];
// cout<<"enter your name"<<endl;
// cin>>name;
// int n = getLength(name);
// reverse(name, n);
// return 0;
// }




// palindrome

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
bool palindrome(char name[], int n){
    int i =0;
    int j = n-1;
    int count = 0;
   while (i<=j)
   {
     if(name[i]!=name[j]){
      return 0;
     }
     else{
        i++;j--;}
   }
  return 1;
}
int main(){
char name[20];
cout<<"enter your name"<<endl;
cin>>name;
int n = getLength(name);
cout<< palindrome
return 0;
}



