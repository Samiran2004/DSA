#include <stdio.h>
#include <stdlib.h>
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num + sum(num - 1));
    }
}
int main()
{
    int choice, value;
    while (1)
    {
        printf("Enter 1 for Calculate, 2 for exit: ");
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
                printf("Result: %d\n", sum(value));
            }
        case 2:
            exit(0);
        default:
            printf("Invalid Input...\n");
        }
    }
    return 0;
}