#include <stdio.h>
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d number element: %d\n", i + 1, arr[i]);
    }
}
void reverseArray(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    int temp, i;
    while (start <= end)
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
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, size);
    return 0;
}