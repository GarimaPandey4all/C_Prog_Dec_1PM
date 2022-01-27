#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    char name[20];

    printf("Enter any String - 1 :");
    //scanf("%s", &str);
    gets(str);

    printf("Enter any String - 2:");
    gets(name);

    //printf("Length of the String is: %d\n", strlen(str));

//    printf("String - 1 is copying to String - 2: %s", strcpy(name, str));

   // printf("String - 1 is copying to String - 2: %s\n", strcpy(name, "Delhi"));

    //printf("String 1 is joining to String - 2: %s", strcat(str, name)); // string concatenation/joining

//    printf("Uppercase is: %s\n", strupr(str));
//    printf("Lowercase is: %s\n", strlwr(str));

//    a - 97 to z - 122
//    A - 65 to Z - 90

//    str = abe
//    name = abc
//
//    a - a = 97 - 97 = 0
//    b - b = 98 - 98 = 0
//    c - b = 99 - 98 = 1
//    c - d = 99 - 100 = -1
//    e - d = 101 - 100 = 1
//    e - c = 101 - 99 = 2


    if(strcmp(str, name) == 0)
    {
        printf("Both the Strings are Same");
    }
    else {
        printf("Strings are not Same");
    }

    return 0;
}
