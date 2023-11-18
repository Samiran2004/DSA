function findFloorValue(arr, key) {
    let arrLength = arr.length;
    let i;
    for (i = arrLength; i >= 0; i--) {
        if (arr[i] < key) {
            return arr[i];
        }
    }
}
function findCeilValue(arr, key) {
    let arrLength = arr.length;
    let i;
    for (i = 0; i < arrLength; i++) {
        if (arr[i] > key) {
            return arr[i];
        }
    }
}
let arr = [2, 4, 8, 11, 13, 22, 23, 45, 55];
let key = 10;
let floorValue = findFloorValue(arr, key);
let ceilValue = findCeilValue(arr, key);
console.log(`The Floor value of ${key} is ${floorValue} and Ceil value is ${ceilValue}`);