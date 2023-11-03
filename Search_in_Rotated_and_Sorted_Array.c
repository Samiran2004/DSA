#include <stdio.h>
int getPivot(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
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
        mid = start + (end - start) / 2;
    }
    return start;
}
int binarySearch(int *arr, int start, int end, int key)
{
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int searchInRoatedAndSortedArray(int *arr, int size, int key)
{
    int pivot = getPivot(arr, size);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        return binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}
int main()
{
    int size, i, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element: ");
    scanf("%d", &key);
    printf("%d", searchInRoatedAndSortedArray(arr, size, key));
    return 0;
}