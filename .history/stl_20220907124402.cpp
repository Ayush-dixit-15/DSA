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
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.pop_back();
// cout<<v.at(1)<<endl;
cout<<v.capacity()<<endl;
cout<<v.size();
return 0;
}




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
// return 0;
// }