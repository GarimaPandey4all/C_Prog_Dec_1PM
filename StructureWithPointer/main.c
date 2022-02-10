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
}date, *pdate;

//struct Date date, date2, date3;

int main()
{
//    struct Date date, date2, date3;

    pdate = &date;

    pdate->day = 10;
    (*pdate).month = 2;
    pdate->year = 2022;

    printf("%d - %d - %d", pdate->day, pdate->month , pdate->year);

    return 0;
}

