#include <stdio.h>
#include <stdlib.h>
//
//*****
//*****
//*****
//*****
//*****
//
//rows = 5
//cols = 5

//12345
//12345
//12345
//12345
//12345
//
//11111
//22222
//33333
//44444
//55555

int main()
{
    int i, j;

    //nested loops
    //outer loop
    for(i = 1; i <= 5; i++) // rows
    {
        //inner loop
        for(j = 1; j <= 5; j++) // columns
        {
            //printf("*");
            //printf("%d", j);
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
