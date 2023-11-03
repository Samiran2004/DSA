#include <stdio.h>
int findSquareRoot(int *arr, int size, int key)
{
    int start = 0;
    int end = size;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if ((arr[mid] * arr[mid]) == key)
        {
            return arr[mid];
        }
        else if ((arr[mid] * arr[mid]) > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}
int main()
{
    int number, i, size, count = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    size = number;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        arr[i] = count;
        count++;
    }
    // for (i = 0; i < size; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    int result = findSquareRoot(arr, size, number);
    printf("%d", result);
    return 0;
}