#include <stdio.h>
#define MAX 10
int main()
{
    int arr[MAX], size, i, j, count = 1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    if (count > 1)
    {
        printf("No Unique element...");
    }
    else
    {
        printf("Unique element found...");
    }
    return 0;
}