//Encapsulation Example
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

// Second example
//validation in encapsulation

#include <iostream>
using namespace std;

class BankAccount{
    private:
    double balance;
    
    public:
    BankAccount(double initial_balance) : balance(initial_balance){}
    //getter function for balance
    double getBalance() {
        return balance;
    }
        // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {  // validation to ensure deposit amount is positive
            balance += amount;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {  // validation to ensure sufficient balance
            balance -= amount;
        }
    }
};
int main() {
    BankAccount account(1000.0);
    account.deposit(500.0);
    cout << "Balance after deposit: $" << account.getBalance() << endl;
    account.withdraw(300.0);
    cout << "Balance after withdrawal: $" << account.getBalance() << endl;
    return 0;
}
