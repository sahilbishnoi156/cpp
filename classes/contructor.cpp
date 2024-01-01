#include <iostream>
#include <string>
using namespace std;


class Phone{
    string _name;
    string _os;

public:
    Phone();  // This is default constructor
    Phone(const string &name, const string &os);  // Parameter constructor
    // Phone(const Phone&);  // Copy constructor


    void getDetails(){
        cout << "Name: " << this->_name << "\nOs: " << this->_os << endl;
    };

    // ~Phone();  // destructor
};


Phone::Phone() : _name("Null"), _os("Null"){
    puts("Defaulter constructor");
};

Phone::Phone(const string &name, const string &os) : _name(name), _os(os){
    puts("parameter constructor");
};

int main(int argc, char const *argv[])
{
    Phone samsung;
    samsung.getDetails();
    
    return 0;
}
