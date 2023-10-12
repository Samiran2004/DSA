#include <stdio.h>
#include <stdlib.h>
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int choice, value, result;
    while (1)
    {
        printf("Enter 1 for Factorial, 2 for exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &value);
            if (value < 0)
            {
                printf("Please enter a positive number...\n");
            }
            else
            {
                result = factorial(value);
                printf("Result: %d\n", result);
            }
            break;
        case 2:
            exit(0);

        default:
            printf("Please Enter a valid choice...\n");
        }
    }
    return 0;
}