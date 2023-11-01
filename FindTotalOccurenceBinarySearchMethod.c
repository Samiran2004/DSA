#include <stdio.h>

int findOccurrence(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int firstOccurrence = -1;

    // Find the first occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            firstOccurrence = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (firstOccurrence == -1)
    {
        return 0;
    }

    // Find the last occurrence
    start = 0;
    end = size - 1;
    int lastOccurrence = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            lastOccurrence = mid;
            start = mid + 1; // Adjust the start to search in the right subarray
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return (lastOccurrence - firstOccurrence + 1);
}

int main()
{
    int size, i, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d", &key);
    int result = findOccurrence(arr, size, key);
    printf("Total occurrences of %d: %d\n", key, result);
    return 0;
}
