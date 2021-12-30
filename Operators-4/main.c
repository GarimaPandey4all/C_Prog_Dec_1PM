#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    Bitwise Operators
//    &, |, ^, <<, >>

//    bitwise : binary
//    1 byte = 8 bits

//    decimal (0 to 9) and binary (0 or 1)
//
//    binary conversion:
//
//    binary = 2
//
//    ......, 2 ^ 7 , 2 ^ 6 , 2 ^ 5, 2 ^ 4 , 2 ^ 3, 2 ^ 2 , 2 ^ 1 , 2 ^ 0
//              128     64      32     16      8      4       2       1
//
//    4 ----> 0000 0100
//    5 ----> 0000 0101 &
//            0000 0100 = 4
//
//    OR: Inclusive
//    4 ----> 0000 0100
//    5 ----> 0000 0101 |
//            0000 0101 = 5
//
//    X - OR: Exclusive OR
//
//    0   1   1   0
//    0   1   0   1
//    0   0   1   1
//
//    4 ----> 0000 0100
//    5 ----> 0000 0101 ^
//            0000 0001 = 1
//
//    Left Shift
//    4 ----> 0000 0100
//
//    0000 0100 - by 1 shift
//    0000 1000 = 8
//
//    0000 0100 - by 2 shift
//    0001 0000 = 16
//
//    shortcut of left shift
//
//    n * 2 ^ shift
//    4 * 2 ^ 1 = 8
//    4 * 2 ^ 2 = 16
//
//    Right Shift
//    4 ----> 0000 0100
//
//    0000 0100 - by 1 shift
//    0000 0010 = 2
//
//    0000 0100 - by 2 shift
//    0000 0001 = 1
//
//    shortcut of right shift
//
//    n / 2 ^ shift
//    4 / 2 ^ 1 = 2
//    4 / 2 ^ 2 = 1
//
//    a = 4, b = 5
//
//    a & b = 4
//    a | b = 5
//    a ^ b = 1
//    a << 1 = 8
//    a << 2 = 16
//    a >> 1 = 2
//    a >> 2 = 1

    printf("AND Bitwise Operator: %d\n", (a & b));
    printf("OR Bitwise Operator: %d\n", (a | b));
    printf("X-OR Bitwise Operator: %d\n", (a ^ b));
    printf("Left Shift Bitwise Operator: %d\n", (a << 1));
    printf("Left Shift Bitwise Operator: %d\n", (a << 2));
    printf("Right Shift Bitwise Operator: %d\n", (a >> 1));
    printf("Right Shift Bitwise Operator: %d\n", (a >> 2));

    return 0;
}
