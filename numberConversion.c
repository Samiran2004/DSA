#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void convertBinary(int num)
{
    int ans = 0, i = 0;
    while (num != 0)
    {
        int bit = num % 2;
        ans = ans + (bit * pow(10, i));
        num = num / 2;
        i++;
    }
    printf("Binary representation is: %d\n", ans);
}
void convertDecimal(int num)
{
    int ans = 0, i = 0;
    while (num != 0)
    {
        int bit = num % 10;
        if (bit == 1)
        {
            ans = ans + (bit * pow(2, i));
        }
        num = num / 10;
        i++;
    }
    printf("Decimal representation is: %d\n", ans);
}
int main()
{
    int choice, num;
    while (1)
    {
        printf("Enter 1 for Decimal to Binary, 2 for Binary to Decimal, 3 for exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the decimal number: ");
            scanf("%d", &num);
            convertBinary(num);
            break;
        case 2:
            printf("Enter the binary number: ");
            scanf("%d", &num);
            convertDecimal(num);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Enter a valid input.......");
        }
    }
    return 0;
}