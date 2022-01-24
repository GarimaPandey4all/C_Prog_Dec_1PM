#include <stdio.h>
#include <stdlib.h>

//Array:
//
//    1D - Single Dimensional Array
//    2D - Multi - Dimensional Array
//    3D - Same as above
//    4D - Same as above

int main()
{
    int matrix1[2][3], matrix2[2][3], result[2][3], i, j; // total 6 values

//    2 - rows
//    3 - columns

//    Table or Matrix, Excel

    printf("enter values in matrix-1:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("enter values in matrix-2:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("values in matrix-1 are:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d  ", matrix1[i][j]);
        }

        printf("\n");
    }

    printf("values in matrix-2 are:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d  ", matrix2[i][j]);
        }

        printf("\n");
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Addition is:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d  ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
