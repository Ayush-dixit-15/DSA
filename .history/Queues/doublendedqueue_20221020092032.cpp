#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;
d.push_front(18);
d.push_back(14);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
return 0;
}