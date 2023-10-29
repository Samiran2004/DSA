#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int size, exptResult;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the expected sum: ");
    scanf("%d", &exptResult);

    printf("Enter %d number elements: ", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    qsort(arr, size, sizeof(int), compare);

    for (int i = 0; i < size - 2; i++)
    {
        int left = i + 1;
        int right = size - 1;

        while (left < right)
        {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == exptResult)
            {
                printf("%d %d %d\n", arr[i], arr[left], arr[right]);
                left++;
                right--;
            }
            else if (currentSum < exptResult)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return 0;
}
