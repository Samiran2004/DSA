#include <stdio.h>
#include <math.h>
int main()
{
    int number, m, mask = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    m = number;
    if (m == 0)
    {
        printf("Answer: %d\n", 1);
    }
    else
    {
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~number) & mask;
        printf("Answer is: %d\n", ans);
    }
    return 0;
}


// // For LeetCode Solution...................

// int bitwiseComplement(int n) {
//     int mask = 1;
//     int m = n;

//     if (m == 0) {
//         return 1;  // The complement of 0 is 1
//     } else {
//         while (m > 1) {
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }
//         int ans = (~n) & mask;
//         return ans;
//     }
// }