#include <stdio.h>
#define MAX 10
void swapAlternate(int *arr, int size)
{
    int i, temp;
    for (i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[MAX], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    swapAlternate(arr, size);
}