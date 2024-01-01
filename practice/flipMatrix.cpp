#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int m = 4, n = 4;
    int arr[m][n] = {{1,2,3,9}, {4,5,6, 9}, {7,8,9, 9}, {0, 1, 2, 3}};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Flipped\n";

    int temp = 0;
    for (int i = 0; i < m; i++){
        for (int  j = 0; j < n/2; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][m-j-1];
            arr[i][m-j-1] = temp;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
