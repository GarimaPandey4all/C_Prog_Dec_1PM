#include <stdio.h>
#include <stdlib.h>

//54321
//54321
//54321
//54321
//54321
//
//55555
//44444
//33333
//22222
//11111

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= 1; j--)
        {
            //printf("%d", j);
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
