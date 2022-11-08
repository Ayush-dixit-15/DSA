
#include<iostream>
#include<queue>
#include<stack>
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
   stack<int> st;
   while(q.front()!=q.back()){
      st.push(q.front());
      q.pop();
   }
   print
return 0;
}