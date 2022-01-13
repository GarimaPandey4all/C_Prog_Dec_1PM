#include <stdio.h>
#include <stdlib.h>

//ABCDE
//ABCDE
//ABCDE
//ABCDE
//ABCDE
//
//AAAAA
//BBBBB
//CCCCC
//DDDDD
//EEEEE

int main()
{
    //char i, j;
    int i, j;

//    ASCII Values
//
//    A - 65 to Z - 90
//    a - 97 to z - 122

    //nested loops
    //outer loop
   // for(i = 'A'; i <= 'E'; i++) // rows
   for(i = 65; i <= 69; i++)
    {
        //inner loop
        //for(j = 'A'; j <= 'E'; j++) // columns
        for(j = 65; j <= 69; j++)
        {
            printf("%c", j);
            //printf("%c", i);
        }

        printf("\n");
    }

    return 0;
}
