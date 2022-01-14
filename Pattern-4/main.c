#include <stdio.h>
#include <stdlib.h>

//*
//**
//***
//****
//*****
//
//rows = 5
//cols = 5

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
