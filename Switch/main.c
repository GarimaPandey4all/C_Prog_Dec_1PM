#include <stdio.h>
#include <stdlib.h>

//Switch or Menu Driven Program
//

//repeation: iteration - loop

int main()
{
    int a, b, choice;

    while(1) // 1 - always true - infinite loop
    {
        printf("\n\nPress 1. Addition\n");
        printf("Press 2. Subtraction\n");
        printf("Press 3. Multiplication\n");
        printf("Press 4. Division\n");
        printf("Press 5. Exit\n");

        printf("\n\nEnter your choice:\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Addition is: %d\n", (a + b));
            break;

        case 2:
            printf("Enter value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Subtraction is: %d\n", (a - b));
            break;

        case 3:
            printf("Enter value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Multiplication is: %d\n", (a * b));
            break;

        case 4:
            printf("Enter value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Division is: %d\n", (a / b));
            break;

        case 5:
            exit(0); // exit the program

        default:
            printf("Invalid Choice");
        } // end of switch
    } // end of while loop

    //printf("Outside the switch - block");

    return 0;
}
