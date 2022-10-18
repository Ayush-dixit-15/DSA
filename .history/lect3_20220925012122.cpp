// whenever you get a complex question of patterns try to divide it in a number of patterns and then compile them 
//patterns
//basics
//1. cin does not reads the tab the next line and the sapce character.For this we use the cin.get() function
//q1 print : ****
//           ****
//           ****
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1 ;
// while(i<=n)
// {
// int j=1;
// while(j<=n){
//     cout<<"+"; 
//     j++;
// }
// cout<<endl;
// i++;
// }
// return 0;
// }
// what is happening here  is that we have initialised two loops whit variables i and j sop in the first loop the condition is till the value is less than the n. So, in the begining let us say the value here is 1 then it will go inside the loop and get another loop with the variable j and again will encounter the same condition till the value is less than n will print the +. Now, after that will escape from the loop after which then again goes to the outer loop and again the conditon of i<n preavils and again the nexy line ets print and in the same way it prints the pattern 
//q : to print : 111
//               222
//               333
// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cin>> n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<i;
//         j++;
//     }
//     cout<<"\n";
//     i++;
// }
// return 0;
// }
//q1: print 1234
   //       1234
   //       1234
//          1234
// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cin>> n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<"\t"<<j;
//         j++;
//     }
//     cout<<"\n";
//     i++;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cin>> n;
// int i=n;
// while(i>=1){
//     int j=n;
//     while(j>=1){
//         cout<<"\t"<<j;
//         j--;
//     }
//     cout<<"\n";
//     i--;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cin>> n;
// int i=1;
// int count = 1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<"\t"<<count;
//          count++;
//         j++;
//     }
//     cout<<"\n";
//     i++;
// }
// return 0;
// }
//q1 print *
//         **
//         ***
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<"\t*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }
//q1 print :    1
//              22
//              333
//              4444
// #include<iostream> using namespace std; int main(){ int n; cin>>n; int i=1; while(i<=n){ int j=1; while(j<=i){ cout<<"\t"<<i; j++; } cout<<endl; i++; } return 0; }
//print :   1
//          23
//          456
//          78910
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=0;
  
//     while(j<=i){
//         cout<<"\t"<<(j+i);
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }
//what has happened here basically is that we have initailised a loop varibale i as the value of 1 and another loop varibale j as 1. Then the outer loop with i as th variable is made to run and inside which a variable named count is also initialised as the vlaues of the i. then , the code enters the inener loop with j as the loop varibale inside which the print is for the count and will be incremented by 1 . So at first , i would be having the value of 1 and which will be given to the count now the variable j will also have the value 1 and will print the count and count will be incremented by one that is 2. Now, since j satisfies the condition of j<=i which causes it to exit the loop and come outside where now i is incremented by 1 and becomes 2 but it still is < n, Do, again goes into the loop, count is given the value 2, inner loop is entered with j=1 now j<i so count will be printd and will be incremented by 1 . but since j is stil <=i, loop will again work and this time 3 wil be printed as the value. Then, the loop will ve exited and i value will be incremented by 1 and will become 3 which will be assigned to count and agan the whole process will happen but this time till the inner loop is exited, the value of the 

// print    1
//          21
//          321
//          4321
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=0;
  
//     while(j<i){
//         cout<<"\t"<<(i-j);
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }
//q to print:   AAA
//              BBB
//              CCC
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         char ch = 'A' +i -1;//this is for the printing of the character
//         cout<<ch;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// return 0;
// }
//q1 print ABC
//         DEF
//         GHI
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         char ch= 'A'+j-1;
//         cout<< ch;;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }
//Q PRINT: ABC
//         DEF
//         GHI
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// int count=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         char ch= 'A'+count-1;
//         cout<< ch;
//         count++;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }
//q1 print:    ABC
//             BCD
//             CDE 
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=0;

// while(i<n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         char ch= 'A'+(i+j)-1;
//         cout<< ch;
     
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }
//q print A
//        BB
//         CCC
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;

// while(i<=n)
// {
//     int j=1;
//     while(j<=i)
//     {
//         char ch= 'A'+i-1;
//         cout<< ch;
     
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }
//print       A
//            BC
//            DEF
//            GHIJ
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// char value ='A';
// while(i<=n)
// {
//     int j=0;
//     while(j<i)
//     {
       
//         cout<< value;
//         value++;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }
//PRINT A
//      BC
//      CDE
//      DEFG
    
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=0;
// while(i<=n)
// {
//     int j=0;
//     while(j<=i)
//     {
//        char ch = 'A'+(i+j);
//        cout<<ch;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }

//q print   D
//          CD
//          BCD
//          ABCD
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     char ch = 'A'+(n-i);// this is done in order to decrement the value instead of increasing it.
//     while(j<=i)
//     {
  
//        cout<<ch;
//         j=j+1;
//         ch++;
//     }
//     cout<<endl;
//     i=i+1;

// }

// return 0;
// }
//
//print   *
  //      **
 //       ***
//        ****
// #include<iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   int i=1;
//   while(i<=n){
    //space printing ke lie
    
//     int space = n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     int j=1;
//     while(j<=i)
//     {
//         cout<<"*";
//         j = j+1;
//     }
//     cout<<endl;
//     i++;
//   }
// return 0;
//} 
// #include<iostream>
// using namespace std;
// int main(){
// int n=3;
// for (int i = 1; i <= n; i ++){
//     for ( int j = 1 ; j<=i ;j++){
//       cout<< i << endl;
//       j++;
//     }
//     cout<< endl ; 
//     i++ ;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >>n;
// int i =1;
// int count =1;
// while (i <= n){
//   int j= 1;
//   while( j<= i){
//     cout<< count ;
//     j=j+1;
//     count = count+1;
//   }
//    ;
//   i = i+1;
//   cout << endl;
// }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cin>> n;
// int i = 1;
// while (i <= n ){
//   int j =1 ;
//   while (j < i){
//     cout << i-j;
//     j++ ;
//   }
//   i++;
//   cout << endl;
// }
// return 0;
// }
// question : print    *
//                    **
//                   ***
//                  ****
// here total of three loops will operate one is going to print the rows, the other for the columns and the last for printing the spaces

// #include<iostream>
// using namespace std;
// int main(){
// int n ;
// cin >> n;
// int i =1 ;
// while (i <= n ){
//   int space = n-i;
//   while (space){
//    cout << " " ;
//    space = space-1; 
//   }
//   int j =1;
//   while (j <=i )
//   {
//     cout << "*" ;
//     j++ ;
//   }
//    i++;
//    cout <<endl;
  
// }
// return 0;
// }

//  question is to print : 
// ****
// *** 
// **
// *
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int i = 1;
// while (i<=n)
// {
//   int j = n - i + 1;
//   while(j >= 1){
//       cout << "*";
//       j = j-1;
//   }

//   i = i+1;
//   cout<< endl;
// }
// return 0;
// }

// to print: 
  //  ****
  //   ***
  //    **
  //     *
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int i =1;
// while(i<=n){
//   int space = i -1 ;
//   while (space >=1 ) {
//     cout<< " ";
//     space= space-1;
//   }
//   int j = n-i+1;
//   while (j >=1 ){
//     cout << "*";
//     j=j-1;
//   }
//   i=i+1;
//   cout << endl;
// }
// return 0;
// }
// print:
// 1111
//  222
//   33
//    4

// #include<iostream>
// using namespace std;
// int main(){
// int n ;
// cin >>n ;
// int i = 1;
// while (i <= n){
//   int space = i-1;
//   while ( space >= 1 ){
//      cout << " ";
//      space = space-1;
//   }
//   int j = n - i + 1;
//   while (j >= 1)
//   {
//      cout<< i ;
//      j = j-1;
//   }
//   cout<< endl;
//   i = i+1;
// }
// return 0;
// }
// to print
//        1
      // 22
      // 333
      // 4444
// #include<iostream>
// using namespace std;
// int main(){
// int n;
//  cin >> n;
//  int  i =1;
//  while (i<=n){
//   int space = n-i;
//   while(space>=1){
//     cout <<" ";
//     space = space-1;
//   }
//   int j =1;{
//     while(j<=i){
//       cout << i ;
//       j= j +1;
//     }
//     i= i+1;
//     cout << endl;
//   }
//  }
// return 0;
// }

// to print
// 1234
//  234
//   34
//    4
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int i =1 ;
// while (i <=n ){
//   int space = i-1;
//   while(space>= 1){
//     cout << " ";
//     space = space-1;
//   }
//   int j  = 1;
//   int count = i ;
//   while ( j<= n-i+1){
//     cout << count ; 
//     count = count +1;
//     j=j+1;
//   }
//   cout<<endl;
//   i = i+1 ;
// }
// return 0;
// }
// to print 
//    1
//   23
//  456
// 78910
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int i =1 ;
// int count = 1 ;
// while (i <=n ){
//   int space = n-i ;
//   while(space>= 1){
//     cout << " ";
//     space = space-1;
//   }
//   int j  = 1;
  
//   while ( j<= i){
//     cout << count ; 
//     count = count +1;
//     j=j+1;
//   }
//   cout<<endl;
//   i = i+1 ;
// }
// return 0;
// }
// to print
//    1 
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int  i =1;
while(i<=n){
  int space = n-i;
  while(space >= 1){
    cout<<" ";
    space=space-1;
  }
  int j = 1;
  while(j <= i ){
    cout<< j;
    j = j+1;
  }
   int k = i-1;
   while(k>=1){
    cout<<k;
    k=k-1;
   }
  cout<<endl;
  i=i+1;
}
return 0;
}
// question
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin >> n;
// int i = 1;
// while(i<=n){
//   int j = 1;
//   while(j<= n-i+1){
//     cout<< j;
//     j =j+1;
//   }
//   int star = i-1;
//   while(star >= 1){
//     cout<< "*";
//     star= star-1;
//   }
//   int star_1 = i-1;
//   while(star_1 >= 1){
//     cout<< "*";
//     star_1= star_1-1;
//   }
//   int k = n-i+1;
//   while (k>=1)
//   {
//     cout<< k ;
//     k=k-1;
//   }
  
//   cout<<endl;
//    i = i+1;
// }
// return 0;
// }