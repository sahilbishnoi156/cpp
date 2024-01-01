#include <iostream>
using namespace std;

// classes
class Employee
{
public:
    string name;
    int salary;

    // This is constructor
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    };

    // This is class method
    void printDetails()
    {
        cout << this->name << endl
             << this->salary << endl;
    };


    // creating a method to access private variables
    void getSecretPassword(){
        cout << this->secretPassword << endl;
    }

private:
    int secretPassword = 23;
};

int main(int argc, char const *argv[])
{
    Employee emp1("sahil", 400); // assigning value using constructor

    //? assigning values to variables of class object
    // emp1.name = "sahil";
    // emp1.salary = 200;


    emp1.printDetails(); // Printing values using class method

    // cout << emp1.secretPassword; // can't print private variable like this
    emp1.getSecretPassword();

    return 0;
}
