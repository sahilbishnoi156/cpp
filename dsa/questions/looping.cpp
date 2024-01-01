#include <iostream>
using namespace std;

int main()
{
    //? Check if number is prime number
    /*
    int number;
    cin >> number;
    for (int i = 2; i < number-1; i++)
    {
        if(number % i == 0) {cout << "not" << endl; return 1; };
    };
    cout << "yes" << endl;

    return 1;
    */

    //* Patterns

    //? pattern 1 
    /*
    int i = 1, n = 4;
    while (i++ <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j++ << " ";
        }
        cout << endl;
    }
    */

    //? pattern 2 (apporach 1)
    /*
    int i = 1, n = 3, t = 1;
    while (i++ <= n)
    {
        int j = 1;
        while (j++ <= n)
        {
            cout << t++ << " ";
        }
        cout << endl;
    }
    */

    //?(apporach 2) 
    /*
    int i = 1, n = 4;
    while (i <= n*n)
    {
        cout << i << ' ';
        if(i++ % n == 0){cout << endl;}
    }
    */

   //? pattern 3 
    /*
    int i = 1, n = 3;
    while (i++ <= n)
    {
        int j = 1;
        while (j++ < i)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
    */

   //? pattern 4
    /*
    int i = 1, n = 4, t = 1, prev=0, num;
    for (int k = 1; k <= n; k++)
    {
        num +=k;
    }
    
    while (i <= num)
    {
        cout << i << ' ';
        if(i == t + prev){cout << endl; t++; prev = i;}
        i++;
    }
    */

    //? pattern 5 
    /*
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i+j-1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */
    //? pattern 6
    /*
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    //? pattern 7
    /*
    int i = 1, n = 5;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (char) (64 + i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    //? pattern 8
    /*
    int i = 1, n = 5;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (char) (n + 65 - i + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    //? pattern 9
    /*
          * 
        * *
      * * *
    * * * *
    int i = 0, n = 4;
    while (++i <= n)
    {
        int j = 0;
        while (++j <= n)
        {
            if(j <= n-i){
                cout << "  ";
                continue;
            }
            cout << "* ";
        }
        cout << endl;
    }
    */

    //? pattern 10
    /*
    * * * * 
    * * *
    * *
    * 
    int i = 0, n = 4;
    while (++i <= n)
    {
        int j = 0;
        while (++j <= n)
        {
            if(j >= n-i+2){
                cout << "  ";
                continue;
            }
            cout << "* ";
        }
        cout << endl;
    }
    */

    //? pattern 11
    /*
    * * * *
      * * *
        * *
          * 
    int i = 0, n = 4;
    while (++i <= n)
    {
        // printing spaces
        int spaces = 0;
        while (++spaces < i)
        {
            cout << "  ";
        }

        int j = 0;
        while (++j <= n-i+1){
            cout << "* ";
        }
        cout << endl;
    }
    */

    //? pattern 12
    /*
    //* 1 2 3 4
    //*   2 3 4
    //*     3 4
    //*       4 
    int i = 0, n = 4;
    while (++i <= n)
    {
        // printing spaces
        int spaces = 0;
        while (++spaces < i)
        {
            cout << "  ";
        }

        int j = 0;
        while (++j <= n-i+1){
            cout << i+j-1 << " ";
        }
        cout << endl;
    }
    */

    //? pattern 13
    /*
    //*       1
    //*     2 3
    //*   4 5 6 
    //* 7 8 9 10
    int i = 0, n = 4;
    while (++i <= n)
    {
        // printing spaces
        int spaces = 0;
        while (++spaces < n - i + 1)
        {
            cout << "  ";
        }
        //printing starts
        int j = 0;
        while (++j <= i){
            cout << i+j-1 << " ";
        }
        cout << endl;
    }
    */

    //? pattern 14
    /*
    int i = 0, n = 6;
    while (++i <= n)
    {
        // printing spaces
        int spaces = 0;
        while (++spaces < n - i + 1)
        {
            cout << "  ";
        }

        int j = 0;
        while (++j <= i){
            cout << j << " ";
        }
        
        --j;
        int k = 0;
        while (++k < i){
            cout << --j << " ";
        }
        cout << endl;
    }
    */

    //? pattern 15
    /*
    //* 1 2 3 4 5 5 4 3 2 1
    //* 1 2 3 4     4 3 2 1
    //* 1 2 3         3 2 1
    //* 1 2             2 1
    //* 1                 1
    
    int i = 0, n = 5;
    while (i <= n)
    {
        int j = 0;
        while (j < n-i){
            cout << j+1 << " ";
            j++;
        }

        // printing spaces
        int spaces = 0;
        while (spaces < (i+i))
        {
            cout << "  ";
            spaces++;
        }

        int k = 0;
        while (k < n-i){
            cout << n-i-k << " ";
            k++;
        }
        cout << endl;
        i++;
    }
    */

   int a=2;
   cout << ~a;
};