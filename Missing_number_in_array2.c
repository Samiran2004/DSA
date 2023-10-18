#include <stdio.h>
#define MAX 20
int main()
{
    int arr[MAX], size, i, total;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d number element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    total = (size * (size + 1) / 2);
    for (i = 0; i < size - 1; i++)
    {
        total = total - arr[i];
    }
    printf("The missing number is: %d\n", total);
    return 0;
}