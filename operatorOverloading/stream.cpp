#include <iostream>
using namespace std;

class Test {
public:
    int x;

    Test(int x = 0) : x(x) {}

    friend ostream& operator<<(ostream& stream, const Test& t);
    friend istream& operator>>(istream& stream, Test& t);
};

ostream& operator<<(ostream& stream, const Test& t) {
    stream << t.x << endl;
    return stream;
}

istream& operator>>(istream& stream, Test& t) {
    stream >> t.x;
    return stream;
}

int main() {
    Test t;
    cin >> t;
    cout << t;

    return 0;
}
