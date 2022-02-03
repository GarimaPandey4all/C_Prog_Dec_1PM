#include <stdio.h>
#include <stdlib.h>

//Enumeration: enum : it is used to store multiple/group of constants.

int main()
{
    enum Week {Monday = 10, Tuesday = 20, Wednesday, Thursday, Friday, Saturday, Sunday};

    enum Week today = Tuesday;

    printf("Today is: %d", today);

    return 0;
}
