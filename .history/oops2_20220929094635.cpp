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
    private:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};
class Male:public Human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl
    }
}
int main(){

return 0;
}