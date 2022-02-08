#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    //add(10, 20); // call by value
    add(&a, &b); // call by reference/address

    return 0;
}

void add(int *a, int *b)
{
    printf("Addition is: %d", (*a + *b));
}
