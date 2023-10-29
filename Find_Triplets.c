#include <stdio.h>
int main()
{
    int size, exptResult, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the expected sum: ");
    scanf("%d", &exptResult);
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            for (k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == exptResult)
                {
                    printf("%d ", arr[i]);
                    printf("%d ", arr[j]);
                    printf("%d\n", arr[k]);
                }
            }
        }
    }
    return 0;
}