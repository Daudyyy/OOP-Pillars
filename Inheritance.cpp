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
return 0;
};