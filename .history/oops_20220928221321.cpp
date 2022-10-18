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
// #include<iostream>
// using namespace std;
// class hero{
//     private:
//      int health;
//     public:
//      char level;
//      hero(int health){
//         cout<<this<<endl;
//        this->health = health;
//     //    it specifies which health it is talking about
//     //   it is done by treating this as a pointer pointer to the current object 
//      }
//      hero(int health, char level){
//         // cout<<this<<endl;
//        this->health = health;
//        this->level = level;
//     //    it specifies which health it is talking about
//     //   it is done by treating this as a pointer pointer to the current object 
//      }

//     // getter function
//     int getHealth(){
//         return health;
//     }

//     char getLevel(){
//         return level;
//     }
//     // setter function
//     void setHealth(int h){
//         health = h;
//     }
//     char setLevel(int ch){
//         level = ch;
//     }
// };
// int main(){

// // hero paul;
// // paul.level = 'a';
// // // health is a private varibale but the function accessing it i
// // paul.setHealth(80);
// // cout<<paul.getHealth()<<endl;
// // DYNAMIC MEMORY ALLOCATION
// // hero *ptr = new hero;
// // (*ptr).setHealth(80);
// // cout<<(*ptr).getHealth()<<endl;

// // hero *paul = new hero(80);
// hero paul(80);
// // cout<<&paul<<endl;
// hero hero1(22,'b');



// return 0;
// }



// copy constructor
#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
     int health;
    public:
    char level;
    char *name;
    // defult constructor
    hero(){
        cout<<"default constructor"<<endl;
         name = new char[100];
    }
    //  char level;
     hero(int health){
        cout<<this<<endl;
       this->health = health;
     }
    //  parametrised constructor
     hero(int health, char level){
       this->health = health;
       this->level = level;
     }
    // copy constructor
    hero(hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
        cout<<"copy constructor called"<<endl;
    }
    int getHealth(){
        return health;
    }
     char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
        // cout<<name<<endl;
    }
    char setLevel(int ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};
int main(){
// hero paul(70,'c');
// // copy constructor
// hero ayush(paul);
// ayush.print();
hero hero1;
hero1.setHealth(12);
hero1.setLevel('c');
char name[7] = "ayush";
hero1.setName(name);
// hero1.print();
hero hero2(hero1);
// hero2.print();
hero1.name[0] ='p';
// hero1.print();
// hero2.print();
hero c(70, 'A');
hero b(80,'D');
c.print();
c=b;
// ALL THE VALUES OF B WILL BE COPI 
c.print();
return 0; 

}