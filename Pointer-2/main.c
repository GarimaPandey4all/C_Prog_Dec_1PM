#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 100;

    int *pvalue = &a;

    *pvalue = *pvalue + 20;

    printf("Value is: %d\n", *pvalue);
    printf("Value a is: %d", a);

    return 0;
}
