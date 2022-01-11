#include <stdio.h>
#include <stdlib.h>

//Loops: Reapeatation/Iteration
//
//1. for Loop
//2. while Loop
//3. do while Loop

int main()
{
    int n, i = 1;

    printf("Enter any number:");
    scanf("%d", &n);

//    for(i = 1; i <= 20; i++)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//    }

//    for(;;) // infitite loop
//    {
//
//    }

    //While loop

//    while(i <= 10)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        i++;
//    }

    //do-while loop

    do {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;

    }while(i <= 10);

    return 0;
}
