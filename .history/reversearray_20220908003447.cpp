#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s = 0, e = v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
    
}
void print()
int main(){
vector <int> v;
v.push_back(5);
v.push_back(2);
v.push_back(7);
v.push_back(9);
v.push_back(1);
v.push_back(4);
v.push_back(3);

vector <int> ans = reverse(v);

return 0;
}