function findMissingNumber(num, size) {
    let total = size * (size + 1) / 2;
    let i;
    let sum = 0;
    for (i = 0; i < size; i++) {
        sum = sum + num[i];
    }
    return total - sum;
}
num = [0, 1, 2, 3, 5, 6, 7, 8];
size = num.length;
let result = findMissingNumber(num, size);
console.log(`The missing number is: ${result}`);