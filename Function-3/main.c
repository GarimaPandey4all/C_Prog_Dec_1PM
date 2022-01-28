#include <stdio.h>
#include <stdlib.h>

//3. function with arguments and without return type

//function creation / declaration
void add();

int main()
{
    //function calling
        add(10, 20); // 10, 20 - actual arguments

    return 0;
}

//void - null or empty, no return

//function definition/initialization
void add(int a, int b) // int a, int b - Formal Arguments / Function Parameters
{
    printf("Addition is: %d", (a + b));
}
