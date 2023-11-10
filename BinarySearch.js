function binarySearch(num, key) {
    let start = 0;
    let end = num.length - 1;
    let mid = Math.floor((start + end) / 2);

    while (start <= end) {
        if (num[mid] === key) {
            return mid + 1;
        } else if (num[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = Math.floor((start + end) / 2);
    }

    return -1;
}

let num = [12, 23, 11, 45, 33, 65];
let key = 11;
console.log(binarySearch(num, key));
