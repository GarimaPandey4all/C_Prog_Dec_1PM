#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int a = 10;
    int b = 20;

    //Pointer to a constant and constant pointer

    //pointer to a contant: value can't be changed
    //const int *ptr = &a;

    //*ptr = 30; // error

    //Constant Pointer: Address can't be changed
    int *const ptr = &a;

    //ptr = &b; // error

    //a = 30; //error

    return 0;
}
