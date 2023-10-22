// #include <stdio.h>
// #define MAX 20
// void printArray(int *arr, int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         printf("%d number element is: %d\n", i + 1, arr[i]);
//     }
// }
// void insertionSort(int *arr, int size)
// {
//     int i, j, key;
//     for (i = 1; i <= size - 1; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }
// int main()
// {
//     int arr[MAX], size, i;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     for (i = 0; i < size; i++)
//     {
//         printf("Enter %d number element: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Array before sorting: \n");
//     printArray(arr, size);
//     printf("Array after sorting: \n");
//     insertionSort(arr, size);
//     printArray(arr, size);
//     return 0;
// }

#include <stdio.h>
#define MAX 20
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n\n", arr[i]);
    }
}
void insertionSort(int *arr, int size)
{
    int i, j, key;
    for (i = 1; i <= size - 1; i++)
    {
        key = arr[i + 1];
        j = i - 1;
        while (j >= 0 && arr[j] >= key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[MAX], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before sorting the array is: \n");
    printArray(arr, size);
    return 0;
}