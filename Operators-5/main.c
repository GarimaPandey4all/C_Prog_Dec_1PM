#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; // = : assignment operator

    a += 50; //a = a + 50;

    a *= 60;

    a <<= 5;

    a %= 10;

    printf("a is: %d", a);

    return 0;
}
