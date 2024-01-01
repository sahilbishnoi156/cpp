#include <iostream>
using namespace std;

void reverse1(int arr[], int l)
{
    cout << "Initial" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }

    for (int i = 0; i < l / 2; i++)
    {
        swap(arr[i], arr[l - i - 1]);
    }

    cout << endl
         << "Reversed" << endl;

    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }
}

void reverse2(int arr[], int l)
{
    cout << endl
         << "Initial" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }

    int start = 0;
    int end = l - 1;

    while (start <= end) 
    {
        swap(arr[start++], arr[end--]);
    }
    cout << endl
         << "Reversed" << endl;

    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int l = 5;

    // reverse1(arr, l);
    reverse2(arr, l);
}