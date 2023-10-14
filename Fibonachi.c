#include <stdio.h>
#include <stdlib.h>
int fibonachi(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (fibonachi(num - 1) + fibonachi(num - 2));
    }
}
int main()
{
    int choice, num;
    while (1)
    {
        printf("Enter 1 for run the program, 2 for exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            printf("The fibonachi sequece is: %d\n\n", fibonachi(num));
            break;
        case 2:
            exit(0);
            break;
        default:
            printf("INVALID INPUT...\n\n");
        }
    }
    return 0;
}