#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int r = 3;
    const int c = 3;
    int arr[r][c] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    cout << "Matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Rotated Matrix: \n";
    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         cout << arr[r-j-1][i] << " ";
    //     }
    //     cout << endl;
    // }

    // int temp;
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         temp = arr[i][j];
    //         arr[i][j] = arr[r-j-1][i];
    //         arr[r-j-1][i] = temp;
    //     }
    // }

    // cout << "Matrix: \n";
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
