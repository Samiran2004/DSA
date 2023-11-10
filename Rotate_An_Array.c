#include <stdio.h>
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Element%d: %d\n", i + 1, arr[i]);
    }
}
void rotateArray(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArray(arr, size);
}
int main()
{
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    rotateArray(arr, size);
    return 0;
}