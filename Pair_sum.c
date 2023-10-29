#include <stdio.h>
#define MAX 10
int main()
{
    int arr[MAX], size, expResult, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the expected sum result: ");
    scanf("%d", &expResult);

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size + 1; j++)
        {
            if (arr[i] + arr[j] == expResult)
            {
                printf("%d\n", arr[i]);
                printf("%d\n", arr[j]);
            }
        }
    }
    return 0;
}