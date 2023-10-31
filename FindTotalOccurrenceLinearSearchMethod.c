#include <stdio.h>
int findTotalNumberoccurrence(int *arr, int size, int key)
{
    int count = 0, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int size, i, key, result;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key value to search: ");
    scanf("%d", &key);

    result = findTotalNumberoccurrence(arr, size, key);
    printf("Total occurrence: %d\n", result);
    return 0;
}