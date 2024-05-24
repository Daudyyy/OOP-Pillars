#include <iostream>
using namespace std;

class Human {

    public:
    int height;
    int weight;

    private:
    int age;

    public:
    int getAge(){
        get this-> age;
    }
};

class male: public Human{

    int height;
};

int main(){

male object1;
cout << object1.height << endl;
return 0
};

//Single Inheritance

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "speaking" << endl;
    };

class Dog: public Animal{

};

int main(){
    Dog d;
    d.speak();
    cout << d.age << endl;

    return 0;
};

}

//Multi-Level Inheritance

class Animal{   //first class

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "speaking" << endl;
    };

class Dog: public Animal{   //second class

};

class Puppy: public Dog{   //third class

};

int main(){
    Puppy p;
    p.speak();
    cout << d.age << endl;

    return 0;
};

}

//Multiple Inheritance

class Human{

    public:
    string name;

    public:
    void speak(){
        cout << "speaking" << endl;
    }
};

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

class Hybrid: public Human, public Animal{

};

int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
};

//Hierarchical Inheritance

class A {

    public:
    void fun1(){
        cout << "Inside fun 1" << endl;
    }

};
class B: public A {

    public:
    void fun2(){
        cout << "Inside fun 2" << endl;
    }

};
class C: public A {

    public:
    void fun3(){
        cout << "Inside fun 3" << endl;
    }

};

int main(){

A obj1;
obj1.fun1();

B obj2;
obj2.fun1();
obj2.fun2();

C obj3;
obj3.fun1();
obj3.fun3();

return 0;
};