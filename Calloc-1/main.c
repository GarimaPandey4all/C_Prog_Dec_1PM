#include <stdio.h>
#include <stdlib.h>

//DMA: Dynamic Memory Allocation (Heap Memory of RAM)
//
//Calloc: stands for Contiguous Allocation
//The Calloc() function reserves the block of memory of the specified number of bytes
//and also initialized all bits to zero.
//And it returns a pointer of void which can be casted into pointer of any type / form.
//
//syntax:
//    ptr = (castType *)calloc(n, size);

int main()
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text:");
    scanf("%d", &size);

    //Memory Allocation
    text = (char *)calloc(size, sizeof(char));

    if(text !=  NULL)
    {
        printf("Enter some text:");
        scanf(" ");
        gets(text);

        printf("Inputted text is: %s", text);
    }

    //Memory Deallocation
    free(text);
    text = NULL;

    return 0;
}
