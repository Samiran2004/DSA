/*
    Here's a detailed explanation of the code:

    1. The function `bubbleSort` takes an array `arr` as input.

    2. It initializes variables `arrLength`, `i`, and `j`.

    3. It then starts a nested loop where the outer loop iterates over the  elements of the array using the variable `i`, and the inner loop     iterates over the elements of the array using the variable `j`.

    4. Inside the inner loop, it compares adjacent elements of the array.   If the element at index `j` is greater than the element at index `j +     1`, it swaps the elements.

    5. This process continues until the entire array is sorted.

    6. Finally, the sorted array is returned.
*/
function bubbleSort(arr) {
    let arrLength = arr.length;
    let i, j;
    for (i = 0; i < arrLength; i++) {
        for (j = 0; j < arrLength - i; j++) {
            if (arr[j] > arr[j + 1]) {
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
let arr = [2, 1, 4, 6, 5, 3, 8, 7, 11, 10, 9];
console.log(bubbleSort(arr));