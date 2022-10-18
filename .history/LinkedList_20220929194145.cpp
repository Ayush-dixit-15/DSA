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
    if(n==0 || n==1){
        return n;
    }
 
    int b = fibo(n-1)+fibo(n-2);
    for(int i=n;i>0;i--){
    cout<<fibo(i)<<endl;
    }
}
int main(){
// cout<<fibo(5)<<endl;
fibo(5);
return 0;
}