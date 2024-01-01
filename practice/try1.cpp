#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    const int* ptr = &x;
    int y = 14;
    printf("%d %d\n", (*ptr), x);
    x=11;
    printf("%d %d\n", (*ptr), x);
    ptr = &y;
    printf("%d %d", (*ptr), x);
    return 0;
}
