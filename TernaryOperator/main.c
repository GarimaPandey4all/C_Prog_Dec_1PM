#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    if(a > b)
//    {
//        printf("A is Greater");
//    }
//    else {
//        printf("B is Greater");
//    }

//    Ternary or conditional operator
//    Ternary - 3
//    "?:"
        //(condition) ? true : false;

    (a > b) ? printf("A is Greater") : printf("B is Greater");

    return 0;
}
