#include <stdio.h>
#include <stdlib.h>
//
//operators has five types:
//
//    1. Arithmetic Operators
//    2. Relational / comparison operators
//    3. Logical operators
//    4. Bitwise operators
//    5. Assignment operators

int main()
{
//    a + b: + - operator, a, b: operands

    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    +, -, *, /, %, ++, --

    printf("Addition is: %d\n", (a + b));
    printf("Subtraction is: %d\n", (a - b));
    printf("Multiplication is: %d\n", (a * b));
    printf("Division is: %d\n", (a / b)); // provide Quotient

    //a = 4, b = 5
    printf("Modulus is: %d\n", (a % b)); // provide remainder // 4

    //    ++: Increment by 1
    //    --: Decrement by 1
    //
    //    Pre or Post

    printf("Pre-Increment is: %d\n", ++a);// 5
    printf("Post-Increment is: %d\n", a++); // 5
    printf("A is: %d\n", a); // 6
    printf("Pre-Decrement is: %d\n", --a); // 5
    printf("Post-Decrement is: %d\n", a--);// 5
    printf("A is: %d\n", a); // 4

    return 0;
}
