#include <iostream>
using namespace std;

//compile time 
//function overloading

class A{

    void Hello(){
        cout << "Hello Dawood" << endl;
    };

    void Hello(){
        cout << "Hello Dawood" << endl;
    };
};

int main(){
    A obj;
    obj.Hello();
};

//run time polymorphism
//function overriding

class Animal {
    public:
    void speak(){
        cout << "speaking" << endl;
    };
};

class Dog: public Animal{
    public:
    void speak(){
        cout << "barking" << endl;
    };
};

int main(){
    Dog obj;
    obj.speak();
}