#include <stdio.h>
#include <stdlib.h>

//function: reusability or particular task

//Function has four types:
//
//    1. function without arguments and without return type
//    2. function without arguments and with return type
//    3. function with arguments and without return type
//    4. function with arguments and with return type

//1. function without arguments and without return type

//function creation / declaration
void add();

int main()
{
    //function calling
    for(int i = 1; i <= 3; i++)
    {
        add();
    }

    return 0;
}

//void - null or empty, no return

//function definition/initialization
void add()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition is: %d", (a + b));
}
