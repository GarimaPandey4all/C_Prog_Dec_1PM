#include <stdio.h>
#include <stdlib.h>

//variable or container: It stores some value.
//variable: vary or change

//constant: fixed value, const

int main()
{
    int a = 10; // variable declare and initialize
    const int months = 12;

    printf("A is: %d\n", a);

    a = 30;

    printf("A is: %d\n", a);

    //months = 14;//error

    printf("Months : %d", months);

    return 0;
}
