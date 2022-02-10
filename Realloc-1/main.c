#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;

    ptr = (char *)malloc(5); // 5 bytes

    //String copy
    strcpy(ptr , "Jason");

    printf("String is: %s and Address = %u\n", ptr, ptr);

    //Reallocation Memory
    ptr = realloc(ptr, 15);

    //String Concatenation
    strcat(ptr, ".com");

    printf("String is: %s and Address = %u\n", ptr, ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
