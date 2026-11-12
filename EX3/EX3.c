#include <stdio.h>

int main()
{
    float x = 5.5;
    float *p = &x;

    printf("Address before increment: %p\n", (void *)p);

    p++;

    printf("Address after increment: %p\n", (void *)p);

    return 0;
}
