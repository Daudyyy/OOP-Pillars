#include<iostream>
using namespace std;

class Student {

    private:
    //Data members
    string name;
    int age;
    int weight;

    public:
    //function
    int getage(){
    return this->age;
}
};

int main(){
    Student first;
    cout <<"Encapsulation"<<endl;
    return 0;
}