#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[9] = {1,2,3,4,8,6,7,8,9};
    int even = 0, odd = 0, e_index, o_index;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2 == 0)
        {
            e_index = i;
            even++;
        }
        else{
            o_index = i;
            odd++;
        }
        
    }

    cout << ((even < odd) ? e_index : o_index) << endl;
    
    return 0;
}
