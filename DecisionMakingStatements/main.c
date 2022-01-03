#include <stdio.h>
#include <stdlib.h>

//    Decision/Comparison Making Statements
//
//    1. If-else
//    2. if-else if -else
//    3. switch
//    4. shorthand: if-else ---> ternary operator or conditional operator

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("A is Greater");
    }
    else {
        printf("B is Greater");
    }

    return 0;
}
