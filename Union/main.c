#include <stdio.h>
#include <stdlib.h>

//date print : 03/02/2022
//
//user defined data type: struct, union, enum

//union: data type
union Date { // 4

    int day; // 4
    int month; // 4
    int year; // 4

//}date, date2, date3;
}date;

//union Date date, date2, date3;

int main()
{
//    union Date date, date2, date3;

    date.day = 3;
    printf("%d-", date.day);
    date.month = 2;
    printf("%d-", date.month);
    date.year = 2022;
    printf("%d", date.year);

    //printf("%d - %d - %d", date.day, date.month , date.year);

    return 0;
}
