#include <stdio.h>
#include <stdlib.h>

//Array: It contains multiple values in a single variable.
//
//int a = 10;
//int a[5] = {1, 2, 3, 4, 5};
//[] - subscript operator

//
//[] - closed bracket
//() - open bracket

int main()
{
    int arr[5]; // array variable declare
    int i;

    //manual way of initialization of an array

//    arr[0] = 1;
//    arr[1] = 10;
//    arr[2] = 12;
//    arr[3] = 15;
//    arr[4] = 19;

    printf("Enter values:\n");
    for(i = 0; i < 5; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("Values in Array are: \n");
    for(i = 0; i < 5; i++)
    {
       printf("%d  ", arr[i]);
    }

    //index number: 0 to arr.size - 1(4)

    //int arr2[5] = {10, 20, 30, 40, 50}; // declaration and initialization

//    printf("%d  ", arr2[2]);
//
//    printf("%d", arr2[3]);

//    for(i = 0; i < 5; i++)
//    {
//        printf("%d  ", arr2[i]);
//    }



    return 0;
}
