// // Find Pivot in an Array................

#include <stdio.h>
int getPivot(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int result = getPivot(arr, size);
    printf("Pivot element is: %d\n", result);
    return 0;
}