#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int lSum = 0;
    int rSum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    cout << "Matrix is : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        puts("");
    }
    for (int i = 0; i < 3; i++){
        lSum += arr[i][i];  // left most diagonal
        rSum += arr[i][3-i-1];  // right most diagonal
    }
    cout << "Sum of / Diagonal: " << rSum << endl;
    cout << "Sum of \\ Diagonal: " << lSum << endl;

    cout << "Spiral printing : \n";

    int top = 0, bottom = 2, left = 0, right = 2;
    
    while (top <= bottom && left <= right)
    {
        
    }
    
    
    return 0;
}