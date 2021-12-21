#include <stdio.h>
#include <stdlib.h>

//1 byte  =  8 bits, size

int main()
{
    int a = 10; // 2 bytes or 4 bytes
    //2 bytes: 16-bit compiler, turbo
    //4 bytes: 32-bit compiler, code::blocks

    float pi = 3.14f; // 4 bytes
    double d = 45.67; // 8 bytes
    char ch = 'F'; // 1 byte

    printf("A is: %d\n", a);
    printf("Pi is: %.2f\n", pi);
    printf("D is: %lf\n", d); //lf: long float = double
    printf("Ch is: %c\n", ch);

    printf("size of int is: %d\n", sizeof(a));
    printf("size of float is: %d\n", sizeof(float));
    printf("size of double is: %d\n", sizeof(d));
    printf("size of char is: %d\n", sizeof(ch));

    return 0;
}
