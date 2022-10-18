#include<iostream>
using namespace std;
void reverseString(string str, int i, int j ){
   //base case
   if(i>j){
    return;
   } 
   swap(str[i],str[j]);
   reverseString(str,i++,j++);
   
}
int main(){
string s ="ayush";
reverseString(s,0,s.length()-1);
cout<<str<<endl;
return 0;
}