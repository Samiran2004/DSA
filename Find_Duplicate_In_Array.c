#include <stdio.h>
#define Max 10
int main()
{
    int arr[Max], size, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size + 1; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d number Duplicate element: %d\n", i, arr[i]);
            }
        }
    }
    return 0;
}