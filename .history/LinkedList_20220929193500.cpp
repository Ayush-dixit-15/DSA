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
    if(n==0 || n==1){
        return n;
    }
    int b = fibo(n-1)+fibo(n-2);
    return b;
}
int main(){
fibo(5)<<endl;
return 0;
}