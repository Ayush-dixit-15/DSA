// reverse a string
// #include<iostream>
// using namespace std;
// void reverseString(string &str, int i, int j ){
//     cout<<str<<endl;
//    //base case
//    if(i>j){
//        return;
//    } 
//    swap(str[i],str[j]);
//    reverseString(str,++i,--j);
   
// }
// int main(){
// string s ="abcde";
// reverseString(s,0,s.length()-1);
// cout<<s<<endl;
// return 0;
// }



// check palindrome
// #include<iostream>
// using namespace std;
// bool checkPalindrome(string str, int i , int j){
//   //    base case
//   if(str[i]!= str[j]){
//       return false;
//   }
//   checkPalindrome(str,++i,--j);
//   return true;
// }
// int main(){
// string str = "tattarrattat";
// cout<<checkPalindrome(str, 0, str.length()-1)<<endl;
// return 0;
// }

// a to the power b
#include<iostream>
using namespace std;
int power(int a, int b){
    int ans =0;
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    ans = a*power(a,b/2);
    if(b%2 ==0 )
    return ans;

}
int main(){
int n, pow;
cout<<"enter the numbr to get the power of"<<endl;
cin>>n;
cout<<"enter the powers to be calculated"<<endl;
cin>>pow;
cout<<power(n,pow)<<endl;
return 0;
}