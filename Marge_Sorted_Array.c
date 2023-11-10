#include <stdio.h>
// // Print the Marge Array.........
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Element%d: %d\n", i + 1, arr[i]);
    }
}
// // Marge two array Algorithm.........
int Marge(int *arr1, int size1, int *arr2, int size2)
{
    int i = 0, j = 0, k = 0;
    int size3 = size1 + size2;
    int arr[size3];
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < size1)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < size2)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
    printArray(arr, size3);
}
int main()
{
    int size1, i, size2;
    printf("Enter the size of the 1st array: ");
    scanf("%d", &size1);
    int arr1[size1];
    for (i = 0; i < size1; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("\n\n");
    printf("Enter the size of the 2nd array: ");
    scanf("%d", &size2);
    int arr2[size2];
    for (i = 0; i < size2; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    Marge(arr1, size1, arr2, size2);
    return 0;
}