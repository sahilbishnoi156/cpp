#include <iostream>
using namespace std;

void rotate(int** arr, int start, int end){
    cout << arr[start] ;
}

int main(int argc, char const *argv[])
{
    const int m = 3, n = 3;
    int arr[m][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Array" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int left = 0, top = 0, right = m-1, bottom = n-1;
    int temp, next;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i < right; i++)
        {
            next = arr[top][i+1];
            arr[top][i+1] = next;
        }
        top++;

        for (int i = top; i < bottom; i++)
        {
            
        }
        top++;

        for (int i = right; i < left; i++)
        {
            
        }
        top--;

        for (int i = bottom; i < top; i++)
        {
            
        }
        top++;
        
    };
    

    cout << "New Array" << endl;
    
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
