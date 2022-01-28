#include <stdio.h>
#include <stdlib.h>

//2. function without arguments and with return type

//function creation / declaration
int add();

int main()
{
    //function calling
        int result = add();

        printf("Addition is: %d", result);

    return 0;
}

//void - null or empty, no return

//function definition/initialization
int add()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //printf("Addition is: %d", (a + b));
    return (a + b);
}
