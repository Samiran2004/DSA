let arr = [12, 33, 54, 65, 22, 13, 76, 88, 97, 56];
let srcElm = 76;
let length = arr.length;
let count = 0;
for (let i = 0; i <= length - 1; i++) {
    if (arr[i] == srcElm) {
        break;
    }
    count++;
}
console.log(`Element ${srcElm} is found on ${count} number position...`);