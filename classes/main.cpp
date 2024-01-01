#include <iostream>
using namespace std;

class User
{
    int _secret = 22; // private members must start with underscore.
public:
    string name = "user";
    void setterForSecret(const int &newSecret)
    { // If we pass direct integer without variable then it will give error. [if const not used]x`
        _secret = newSecret;
        cout << "New secret value has been set.\n";
    };

    int getterForSecret() const; // const written here is because non constant objects can access constant methods but constant objects can't access non-constant methods.
    void printDetails();
};

void User::printDetails() { cout << "Hey" << name << "how are you buddy!" << endl; } // scope resolution operator shows that this method is for class User.
int User::getterForSecret() const { return _secret; }

int main(int argc, char const *argv[])
{
    User jack;
    cout << jack.name << endl; // printing public variable.
    int newSecret = 4;
    cout << jack.getterForSecret() << endl;

    jack.setterForSecret(newSecret);
    // OR
    jack.setterForSecret(222);

    cout << jack.getterForSecret();

    // If we make a new constant oject then we can't access non-constant methods because we have constant object.

    const User harry;

    cout << harry.getterForSecret();
    //~ Error if methods are not constant :- [the object has type qualifiers that are not compatible with the member function "User::getterForSecret]
    return 0;
}
