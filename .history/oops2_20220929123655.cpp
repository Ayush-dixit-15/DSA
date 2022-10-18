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
// single inhertiance
// #include<iostream>
// using namespace std;
// class Human{
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setWeight(int w){
//         this->weight = w;
//     }
// };
// // class Male:public Human{
// //     public:
// //     string color;
// //     void sleep(){
// //         cout<<"male sleeping"<<endl;
// //     }
// // };
// // class Male:protected Human{
// //     public:
// //     string color;
// //     void sleep(){
// //         cout<<"male sleeping"<<endl;
// //     }
// //     int getHeight(){
// //         return this->height;
// //     }
// // };
// class Male:private Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"male sleeping"<<endl;
//     }
//     int getHeight(){
//         return this->height;
//     }
// };

// int main(){
// // Male ayush;
// // ayush.setWeight(5);
// // cout<<ayush.age<<endl;
// // cout<<ayush.weight<<endl;
// // cout<<ayush.color<<endl;  
// // cout<<ayush.height<<endl;
// // ayush.sleep();
// Male Sagar;
// // cout<<Sagar.height<<endl;
// // becomes inaccessible with protected and private method
// cout<<Sagar.getHeight();
// return 0;
// }




// // multilevel inhertiance
// #include<iostream>
// using namespace std;
// class Animal{
//     public:

//     int age;
//     int weight;


//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
// };
// class Dog:public Animal{
    
// };
// class Pitbull:public Animal{

// };
// int main(){
// Dog d;
// d.speak();
// cout<<d.age<<endl;
// Pitbull moti;
// moti.speak();
// cout<<moti.age<<endl;;
// return 0;
// }



// multiple inhertinace
// #include<iostream>
// using namespace std;
// class Animal{
//     public:

//     int age;
//     int weight;


//     public:
//     void bark(){
//         cout<<"barking"<<endl;
//     }
// };
// class Human{
//     public:
//       string color;
//     public:
//       void speak(){
//         cout<<"speaking"<<endl;
//       }
// };
// // multiple inheritance
// class Hybrid:public Animal, public Human{
  
// };
// int main(){
// Hybrid h1;
// h1.bark();
// h1.speak();
// return 0;
// }




// heirarichal
// #include<iostream>
// using namespace std;
// class Animal{
//    public:
//      void fun1(){
//         cout<<"inside function 1"<<endl;
//      }
// };
// class Pitbull:public Animal{
//    public:
//      void fun2(){
//         cout<<"inside function 2"<<endl;
//      }
// };
// class BullDog:public Animal{
//     public:
//     void fun3(){
//         cout<<"inside function 3"<<endl;
//     }
// };
// int main(){
// Pitbull p1;
// p1.fun1();
// p1.fun2();
// BullDog b1;
// b1.fun1();
// b1.fun3();

// return 0;
// }




// inheritance abiguity
// #include<iostream>
// using namespace std;
// class A {
//     public:

//     void func(){
//         cout<<"i am a"<<endl;
//     }
// };
// class B {
//     public:

//     void func(){
//         cout<<"i am b"<<endl;
//     }
// };
// class C: public A, public B {

// };


// int main(){
// C obj;
// // obj.func();
// // ambguity
// obj. A::func();
// obj. B::func();
// return 0;
// }




// polymorphism

#include<iostream>
using namespace std;
class A{
   public:
   void sayHello(){
    cout<<"hello ayush"<<endl;
   }
   void sayHello(string name){
    cout<<"hello ayush"<<name<<endl;
   }
//    function overloading
};
class B{
    public:
      int a;
      int b;
    public:
      int add(){
        return a+b;
      }
      void operator + 
};
int main(){
A obj;
obj.sayHello();
obj.sayHello("dixit");
return 0;
}