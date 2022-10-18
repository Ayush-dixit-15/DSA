// this is macros
// #include<iostream>
// using namespace std;
// #define PI 3.14
// int main(){
// int r =5;
// // double pi = 3.14;
// int area =PI * r* r;
// cout<<"area is "<<area<<endl;
// return 0;
// }



// global variable
// this is used to share the varibales between functions
// #include<iostream>
// using namespace std;

// int score = 15;

// int main(){
// cout<<score<<endl;
// return 0;
// }




// inline functions
// #include<iostream>
// using namespace std;
// inline int getMax(int &a, int &b){
//     return (a>b) ? a : b ;
// }
// // single line function can be made inline
// // 2-3 lined finction may/maynot
// // greater than it are not allowed to be declared inline
// int main(){
//     int a = 5;
//     int b= 9;
//     cout<<getMax(a,b);
//     a = a+6;
//     b=b+1;
//     cout<<getMax(a,b);
// return 0;
// }


// default arguments
#include<iostream>
void print(int arr[], int size, int start =0){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
using namespace std;
int main(){
return 0;
}