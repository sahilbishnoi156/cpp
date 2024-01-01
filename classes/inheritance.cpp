#include <iostream>
using namespace std;

class Man
{
    string _name;
    int _age;
    Man() {}

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}
    void run() { puts("I can run"); };

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is " << _name << " & age is " << _age << endl;
};

// Money for Heroes
class Money
{
public:
    void gotMoney() const
    {
        cout << "Got money" << endl;
    }
};

// superman
class Superman : public Man, public Money  // multiple inheritance
{
    bool flight;

public:
    Superman(const string &name) : Man(name, 26) {}
    // If you want to use Man private members in this class you can use getter or use friend keyword(not recommended)
    void run() { puts("I can run at light speed"); }
};

// Human
class Human : public Man
{
    bool talk;

public:
    Human(const string &name) : Man(name, 16) {}
    void run() { puts("I can run at normal speed"); }
};

int main(int argc, char const *argv[])
{
    Superman clark("clark");
    clark.run();
    clark.sayName();
    clark.gotMoney();
    
    Human jack("jack");
    jack.run();
    jack.sayName();

    return 0;
}
