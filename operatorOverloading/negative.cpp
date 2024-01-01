#include <iostream>
using namespace std;

class ABC {
    int x, y;

public:
    ABC(int x = 0, int y = 0) : x(x), y(y) {}

    void print() {
        cout << x << endl << y;
    }

    ABC operator-(const ABC& other) {
        ABC result(x - other.x, y - other.y);
        return result;
    }
};

int main() {
    ABC a(2, 3);
    ABC b(4, 5);
    ABC c;

    c = b - a;
    c.print();

    return 0;
}
