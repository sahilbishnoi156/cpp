#include <iostream>
#include "../customClasses/MyAlgo.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int row = 4, col = 4;
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9,10,11,12},
                     {13,14,15,16}};
    SpiralPrint(arr, row, col);
    

    return 0;
}
