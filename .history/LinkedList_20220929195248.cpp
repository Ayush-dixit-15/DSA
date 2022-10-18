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
    
    int b =fibo(n-1)+fibo(n-2);
    while(n!<0){
        
    }
    // cout<<b<<endl;
    return b;
}
int main(){
cout<<fibo(3)<<endl;
return 0;
}