#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //Logical Operators
//    &&, || , !

    //a = 4, b = 5
    printf("AND Logical is: %d\n", (a > 10 && b < 20)); // 0
    printf("OR Logical is: %d\n", (a > 10 || b < 20)); // 1
    printf("Not Logical is: %d\n", !(a > 10 && b < 20)); // 0 to 1

    return 0;
}
