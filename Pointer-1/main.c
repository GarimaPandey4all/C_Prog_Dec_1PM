#include <stdio.h>
#include <stdlib.h>

//Indirect Access : Pointer
//
//pointer variable: we can store any variable's address

int main()
{
    int a = 10; // normal variable

    //int *ptr = &a; // asterisk - *

    int *ptr = NULL;

    ptr = &a;

    printf("value of a using pointer: %d\n", *ptr);
    // *-dereference operator - talk about value / // value of a
    printf("Address of a: %u\n", ptr); // address of 'a' variable via pointer
    printf("Address of pointer variable: %u\n", &ptr); // address of pointer variable

    return 0;
}
