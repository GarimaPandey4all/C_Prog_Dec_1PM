#include<stdio.h>

void main()
{
	//signed short int x = 32768; // x = -32768
       //unsigned short int x = 65538; // x = 2
       unsigned short int x = -4; // x = 65532
	clrscr();

//        %d - signed int ,
//     	%u - unsigned value
	printf("x is: %d\n", x); // x = -32768    // x = 2    // x = 65532
	printf("x is: %u\n", x); // x = -32768    // x = 2  // x = -4

	getch();
}