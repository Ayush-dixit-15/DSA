#include<iostream>
using namespace std;
void reverseString(string str, int i, int j ){
   //base case
   if(i>j){
    return;
   } 
   swap(str[i],str[j]);
   reverseString(i++,j++);
}
int main(){
string s ="ayush";

return 0;
}