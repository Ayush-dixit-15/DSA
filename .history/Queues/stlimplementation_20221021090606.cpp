
#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<int> q;
   q.push(15);
   q.push(13);
   q.push(12);
   cout<<q.front()<<endl;
   cout<<q.size()<<endl;
   q.pop();
   cout<<q.front()<<endl;
   cout<<q.size()<<endl;
   cout<<q.empty()<<endl;
   cout<<q[0]<<
   
return 0;
}