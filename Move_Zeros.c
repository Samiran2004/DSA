#include <stdio.h>
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Element%d: %d\n", i + 1, arr[i]);
    }
}
void moveZero(int *arr, int size)
{
    int i = 0, j = 0, temp;
    for (j; j < size; j++)
    {
        if (arr[j] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
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
    moveZero(arr, size);
    return 0;
}