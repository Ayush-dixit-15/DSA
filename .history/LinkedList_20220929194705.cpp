// #include<iostream>
// using namespace std;

// class Node{
//   public:
//   int data;
//   Node*next;
// };
// int main(){
// Node *Node1 = new Node();
// return 0;
// }

#include<iostream>
using namespace std;
int fibo(int n){

    // cout<<b<<endl;
    if(n==1 || n==2){
        return n;
    }
 
    return fibo(n-1)+fibo(n-2);
   
}
int main(){
cout<<fibo(4)<<endl;
return 0;
}