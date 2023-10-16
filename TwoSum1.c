#include <stdio.h>
#define MAX 10
int main()
{
    int x, size, i, j, nums[MAX], target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (x = 0; x < size; x++)
    {
        printf("Enter element: ");
        scanf("%d", &nums[x]);
    }

    printf("Enter target result: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++)
    {
        for (j = 1 + i; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Position: %d, %d\n", i, j);
                printf("Result: %d, %d\n", nums[i], nums[j]);
            }
        }
    }
    return 0;
}