#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Traditional way of initialization
    //int months[12] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};

    //Compile time initilization, only at manual initalization
    int months[] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};

    for(int i = 0; i < 12; i++)
    {
        printf("%d Month has %d Days.\n", i+1, months[i]);
    }

    return 0;
}
