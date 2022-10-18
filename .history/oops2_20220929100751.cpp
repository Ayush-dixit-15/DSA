// // encapsulation
// #include<iostream>
// using namespace std;
// class Student{
//     private:
//       string name;
//       int age;
//       int height; 
//     public:
//     int getAge(){
//         return this->age;
//     }
// };
// // encapsulation achieved, we have wrapped up our data members and memeber functions in one single unit
// int main(){
// Student first;
// return 0;
// }





// inheritance
#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};
// class Male:public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"male sleeping"<<endl;
//     }
// };
class Male:protected Human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
class Adult:public 
int main(){
// Male ayush;
// ayush.setWeight(5);
// cout<<ayush.age<<endl;
// cout<<ayush.weight<<endl;
// cout<<ayush.color<<endl;  
// cout<<ayush.height<<endl;
// ayush.sleep();
Male Sagar;
// cout<<Sagar.height<<endl;
// becomes inaccessible with protected method
cout<<Sagar.getHeight();
return 0;
}