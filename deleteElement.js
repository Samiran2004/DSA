let arr = [2, 3, 4, 5, 9, 6, 7, 8];
let pos = 4;
let length = arr.length;

for (let i = pos; i < length - 1; i++) {
    arr[i] = arr[i + 1];
}
arr.length = arr.length - 1;
console.log(arr);