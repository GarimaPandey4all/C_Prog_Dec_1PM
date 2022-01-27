#include <stdio.h>
#include <stdlib.h>

//String: collection of characters or more than one character
//String like a data type is not exist in the c programming language

//String = char array in c language

int main()
{
    char name[10];

    printf("Enter your name:");
    //scanf("%s", &name);
    gets(name);

    //puts(name);
    printf("You Entered your Name: %s", name);

    return 0;
}
