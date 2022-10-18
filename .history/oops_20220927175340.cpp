#include<iostream>
using namespace std;
class hero{
    // PROPERTIES
    public:
    int health;
    char level;


    void print(){
        cout<<level<<endl;
    }
};
int main(){

hero paul;
cout<< paul.health<< endl;
cout<< paul.level <<endl;
return 0;
}