// STL ARRAY
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
// array<int , 4> a = {1,2,3,4};
// int size = a.size();
// for(int i = 0 ; i< size; i++){
//     cout<<a[i]<<endl;
// }
// cout<<"the element at 2nd position is"<<a.at(2)<<endl;
// cout<<"empty or not"<<a.empty()<<endl;
// cout<<"first element"<<a.front();
// cout<<"last element"<<a.back();
// return 0;
// }




// STL VECTOR
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.pop_back();
// cout<<v.at(1)<<endl;
// cout<<v.capacity()<<endl;
// cout<<v.size();
// return 0;
// }




// STL DEQUE
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
// deque <int> d;
// d.push_back(1);
// d.push_front(2);
// for(int i:d){
//     cout << i<<endl;
// }
// // d.pop_back();
// cout<<d.at(1)<<endl;
// cout<<d.front()<<endl;
// cout<<d.back()<<endl;
// d.erase(d.begin(),d.begin()+1); 
// return 0;
// }



// STL LIST
// we cannot directly acces any element in the list as we can in vector array or deque
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
// list <int> l;
// l.push_back(1);
// l.push_front(2);
// for ( int i: l ){
//     cout<< i <<endl;
// }
// return 0;
// }




// STL stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// stack <string> s;
// s.push("ayush");
// s.push("dixit");
// return 0;
// }


// STL queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
// queue<string> q;
// q.push("ayush");
// q.push("dixit");
// cout<<q.front();
// cout<<q.size();
// q.pop();
// cout<<q.front();
// cout<<q.size();
// return 0;
// }



// STL Priority queue
// in a priority queue either the greatest or the smallest element will come out first
// it is related to heap in max heap the greatest element comes out first and in the min heap the smallest one

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
// priority_queue<int> maxi;
// priority_queue<int, vector<int>, greater<int> > mini;
// maxi.push(1);
// maxi.push(3);
// maxi.push(2);
// maxi.push(7);
// maxi.push(4);
// maxi.push(5);
// int n = maxi.size();
// for (int i = 0; i < n; i++)
// {
//     cout<<maxi.top()<<endl;
//     maxi.pop();
// }cout<<endl;
//  mini.push(4);
//  mini.push(5);
//  mini.push(3);
//  mini.push(2);
//  mini.push(1);
//  mini.push(9);
//  int t = mini.size();
//  for(int i = 0 ; i<t ; i++){
//     cout<< mini.top()<<endl;
//     mini.pop();
//  }
// return 0;
// }




// STL SET
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;
//     s.insert(5);
//     s.insert(6);
//     s.insert(7);
//     s.insert(8);
//     s.insert(52);
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(9);
//     s.erase(4);
// for (int i : s )
// {
//     cout<< i<<endl;
// }
// cout<<s.count(1);
 
//  return 0;
//  }



// STL MAP

#include<iostream>
#include<map>
using namespace std;

int main(){
map <int, string> m;

m[1]="ayush";
m[33]="dixit";
m[11]="shankar"
return 0;
}