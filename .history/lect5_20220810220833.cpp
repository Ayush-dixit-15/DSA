// bitwise operators
// AND &
// OR |
// NOT ~
// XOR ^
// BITWISE LEFT <<
// 5 (101)<< 1 means shift 5 left 1 times which will give 1010 i.e 10
//  left shilfting 3 two times gives us 12 that means while shfting a small number one times left, it gets multiplied by 2
// right >> 
//  5>>2 gives 1  
//  hence, by shifting 5 right 2times ut gets divided ny 2 two times to give 1
//   during left and right shift of an +ve number padding is always done by 0 that is the empty space is filled by 0 only
// while in the case of -ve numbers it is compiler dependant
// increment operator ++
// i++->post increment
// it means first the original value of i will be used and after what it will be incremented ny 1;
// for ex: int i=3 a=2;
// sum = a+ (i++);
//  sum = 2+3 =5
//  ++i -> pre increment
// it means first the origina value of i will be first incremented ny 1 and then after it will be used;
// for ex: int i=3 a=2;
// sum = a+ (++i);
//  sum = 2+4 =6
//  it can also be written as i+ =1
// thi means that i is going to be added by 1
//  if written i+ = b
// that means i will be added with b
//  i-- -> post decrement
// for ex: int i=3 a=2;
// sum = a+ (i--);
//  sum = 2+3 =5
// then. it will be decremented by 1
//  --i ->  pre decrement
// for ex: int i=3 a=2;
// sum = a+ (--i);
//  sum = 2+2 =4
// i wil be decemented by 1 earlier and after what the rest if the operation will take place
//  i- = 1means that i will be decremented by 1
// #include<iostream>
// using namespace std;
// int main(){
// int i=7;
// cout<<(i++); print is 7 aur i ki value is 8
// cout<<(++i); print is 9 and i=9
// cout<<(i--); print is 9 and i=8
// cout<<(--i); print is 7 and i=7
// return 0;
// }
//  for loop me hum multiple varibles daal skte h

// #include<iostream>
// using namespace std;
// int main(){
// for ( int a =0 , b=1 ; a>=0 && b>=1 ; a--, b--)
// {
//     cout << a << b ;
// }
// return 0;
// }
#include<iostream>
using namespace std;
int main(){

int sum =0;
int n;
cin >>n;
for ( int i=0 ; i<n ;i++){
    sum = sum +1;
    i++;
}
cout<<
return 0;
}
