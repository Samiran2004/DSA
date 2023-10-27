#include <stdio.h>
int main()
{
    int num, digit, ans = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        if ((ans > (__INT_MAX__ / 10)) || ans < (__WINT_MIN__ / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        num = num / 10;
    }
    printf("Reverse integer is: %d\n", ans);
    return 0;
}