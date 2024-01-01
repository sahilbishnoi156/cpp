#include <iostream>
using namespace std;

// void lifeUp(int* temp){
//     (*temp)++;
// }
// int main(int argc, char const *argv[])
// {
//     int life = 3;
//     cout << "your initial life is : " << life << endl;

//     lifeUp(&life);
//     cout << "your updated life 1 is : " << life << endl;
//     lifeUp(&life);
//     cout << "your updated life 2 is : " << life << endl;
//     return 0;
// }

/* ------------------- OR ------------------------- */

int lifeUp()
{
    static int life = 3;  // static used to remember previous value and return next value every time it calls 
    return ++life;
}
int main(int argc, char const *argv[])
{
    int life = 3;
    cout << "your initial life is : " << life << endl;

    life = lifeUp();
    cout << "your updated life 1 is : " << life << endl;
    life = lifeUp();
    cout << "your updated life 2 is : " << life << endl;
    return 0;
}
