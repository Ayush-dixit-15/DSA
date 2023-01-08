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
// cout<<m.at("unknown key")<<endl;
// this function alone will throw an exception error of this element not existing in the map
// cout<<m["unknown key"]<<endl;
// this function alone used will create a new entry corresponding to "unknown entry" at 0
cout<<m["unknown key"]<<endl;
cout<<m.at("unknown key")<<endl;
// if these two functions are used simultaneously, it will first create an entry and since a new entry has been created, the later function will also show 0 as the answer

cout<<m.size()<<endl;
// to check presence
cout<<m.count("bro")<<endl;
cout<<m.count("ayush")<<endl;
// this function gives 0 if the key is absent and 1 if present
// erase
m.erase("ayush");
cout<<m.size()<<endl;
// to acces either use for loop
for(auto i:m){
    cout<< i.first <<" "<<i.second<<endl;
}
cout<<endl;
// or use the iterator
m["piyush"] = 5;
unordered_map<string, int> :: iterator it = m.begin();
while(it!=m.end()){
    cout<<it->first<<it->second<<endl;
    it++;
}
// here the type of map used is the unorderd oine 
return 0;
}