#include <stdio.h>
#include <math.h>
int main()
{
    int number, i, ans;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (i = 0; i <= 30; i++)
    {
        ans = pow(2, i);
        if (ans == number)
        {
            printf("True");
            break;
        }
    }
    if (ans != number)
    {
        printf("False");
    }
    return 0;
}



// // For LeetCode Solution............

// bool isPowerOfTwo(int n) {
//     if (n <= 0) {
//         return false;
//     }

//     for (int i = 0; i < 31; i++) {
//         int ans = pow(2,i);
//         if (ans == n) {
//             return true;
//         }
//         if (ans > n) {
//             break;
//         }
//     }

//     return false;
// }