#include <iostream>
#include <vector>
using namespace std;

struct Corners{
    float a, b, c ,d;
};

ostream& operator<<(ostream& stream, const Corners& corner){
    stream <<corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}; 

int main(int argc, char const *argv[])
{
    vector<int> arrList;

    arrList.push_back(1);
    arrList.push_back(2);
    arrList.push_back(3);
    arrList.push_back(4);

    // Getting value from vector
    for (auto i = arrList.begin(); i != arrList.end(); i++){
        // begin gives the reference so you can dereference the pointer and get the value
        cout << *i << endl;
    }

    vector<Corners> corners;
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});
    
    for (int i = 0; i < corners.size(); i++){
        // begin gives the reference so you can dereference the pointer and get the value
        cout << corners[i] << endl;  // this will give me error so we have to override the streaming operator
    }
    
    return 0;
}
