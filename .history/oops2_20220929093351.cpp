// encapsulation
#include<iostream>
using namespace std;
class Student{
    private:
      string name;
      int age;
      int height; 
    public:
    int getAge(){
        return this->age;
    }
};
// encapsulation achieved, we have wrapped up our data me
int main(){
Student first;
return 0;
}