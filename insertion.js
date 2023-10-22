function printArray(arr, size) {
    for (let i = 0; i < size; i++) {
        console.log(arr[i]);
    }
}
function insertionSort(arr, size) {
    let i, j, key;
    for (i = 1; i <= size - 1; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printArray(arr, size);
}
let arr = [12, 54, 65, 7, 23, 9];
let size = arr.length;
console.log("Array before sorting.");
printArray(arr, size);
console.log("Array after sorting.");
insertionSort(arr, size);