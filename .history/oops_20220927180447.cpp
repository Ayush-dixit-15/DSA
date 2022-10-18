// here,note that we are unable to access the private variables from outside the class
// #include<iostream>
// using namespace std;
// class hero{
//     // PROPERTIES
//     private:
//     int health;
//     public:
//     char level;
 

//     void print(){
//         cout<<level<<endl;
//     }
// };
// int main(){
// // creation of an object
// hero paul;
// paul.health = 15;
// paul.level= 'c';
// cout <<paul.health<<endl;
// cout<< paul.level<<endl;
// return 0;
// }

// in able to access it,  we use getter  and setter function
#include<iostream>
using namespace std;
class hero{
    private:
     int health;
    public:
     char level;

    // getter function
    int getHealth(){
        return health;
    }
    int getLevel{
        return level;
    }
    // setter function
    void setHealth(int h){
        health = h;
    }
    void setLevel(int ch){
        level = ch;
    }
};
int main(){
hero paul
co

return 0;
}