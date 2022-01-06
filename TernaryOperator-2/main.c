#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter any value for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

//    if(a > b && a > c)
//    {
//        printf("A is Greater");
//    }
//    else if(b > c)
//    {
//        printf("B is Greater");
//    }
//    else {
//        printf("C is Greater");
//    }

    (a > b && a > c) ? printf("A is Greater") :
        ((b > c) ? printf("B is Greater") : printf("C is Greater"));

    return 0;
}
