#include <stdio.h>
#include <stdlib.h>

//date print : 03/02/2022
//
//user defined data type: struct, union, enum

//structure: data type
struct Date { // 12

    int day; // 4
    int month; // 4
    int year; // 4

//}date, date2, date3;
}date;

//struct Date date, date2, date3;

int main()
{
//    struct Date date, date2, date3;

    date.day = 3;
    date.month = 2;
    date.year = 2022;

    printf("%d - %d - %d", date.day, date.month , date.year);

    return 0;
}
