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
}

}

//Multi-Level

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
}

}