#include <iostream>
using namespace std;

class Rectangle
{
    int _length;
    int _width;

public:
    Rectangle(double l = 0, double w = 0)
    {
        _length = l;
        _width = w;
    }

    int Area()
    {
        return (_length * _width);
    }

    int Compare(Rectangle r)
    {
        return this->Area() > r.Area();
    }
};

main(int argc, char const *argv[])
{
    Rectangle r1(5.0, 3.0);
    Rectangle r2(4.0, 3.0);

    cout << (r1.Compare(r2) ? "Larger" : "Smaller"); 
    
    return 0;
}
