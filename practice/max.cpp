#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {73,87347,387,2,8,24,37,2,7,2,8,3,2,4,3,47,4,7,4,4,7,3,3,8};

    int i = 0;
    int max = -10000;
    while (arr[i] > max){
        max = arr[i++];
    };

    cout << max;
    
    return 0;
}
