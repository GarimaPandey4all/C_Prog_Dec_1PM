#include <stdio.h>
#include <stdlib.h>

//4. function with arguments and with return type

//function creation / declaration
int add();

int main()
{
    //function calling
        int result = add(10, 20); // 10, 20 - actual arguments

        printf("Addition is: %d", result);

    return 0;
}

//void - null or empty, no return

//function definition/initialization
int add(int a, int b) // int a, int b - Formal Arguments / Function Parameters
{
    return (a + b);
}
