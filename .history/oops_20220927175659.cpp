#include<iostream>
using namespace std;
class hero{
    // PROPERTIES
    private:
    
    int health;
    
    char level;


    void print(){
        cout<<level<<endl;
    }
};
int main(){
// creation of an object
hero paul;
paul.health = 15;
paul.level= 'c';
cout <<paul.health<<endl;
cout<< paul.level<<endl;
return 0;
}