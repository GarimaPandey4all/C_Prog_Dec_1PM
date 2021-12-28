#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //Relational or Comparison
//    ==, !=, >, <, >=, <=

//    1 = true or on
//    0 = false or off

//    a = 4, b = 5

    printf("A is equal to B: %d\n", (a == b)); // 0
    printf("A is not equal to B: %d\n", (a != b)); // 1
    printf("A is greater than B: %d\n", (a > b)); // 0
    printf("A is less than B: %d\n", (a < b)); // 1
    printf("A is greater than and equal to B: %d\n", (a >= b)); // 0
    printf("A is less than and equal to B: %d\n", (a <= b)); // 1

    return 0;
}
