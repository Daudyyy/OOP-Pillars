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