#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
// map created
unordered_map<string, int> m;
// 1
pair<string, int> p = make_pair("mera",1);
m.insert(p);
// 2
pair<string, int> p1("naam" , 1);
m.insert(p1);
m["ayush"] = 3;

// searching
cout<<m["ayush"]<<endl;
cout<< m.at("naam")<<endl;
cout<<m.at("unknown key")<<endl;
// this function alone will throw an exception error of this element not existing in the map
cout<<m["unknown key"]<<endl;
// this function alone used 
cout<<m.at("unknown key")<<endl;
return 0;
}