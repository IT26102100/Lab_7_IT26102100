#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b)
{
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}

int compare_absolute(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    else if (abs(b) > abs(a))
        return -1;
    else
        return 0;
}

int max(int a, int b, int (*compare)(int, int))
{
    if (compare(a, b) >= 0)
        return a;
    else
        return b;
}

int main()
{
    int a = 8, b = -10;

    printf("Simple Comparison: max = %d\n",
           max(a, b, compare));

    printf("Absolute Comparison: max = %d\n",
           max(a, b, compare_absolute));

    return 0;
}
