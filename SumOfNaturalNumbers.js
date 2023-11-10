function sumOfNaturalNumbers(num) {
    sum = 0;
    for (i = 0; i < num; i++) {
        sum = sum + i;
    }
    return sum;
}
console.log(sumOfNaturalNumbers(7));
console.log(sumOfNaturalNumbers(75));
console.log(sumOfNaturalNumbers(755));
console.log(sumOfNaturalNumbers(7551));
console.log(sumOfNaturalNumbers(75510));
console.log(sumOfNaturalNumbers(755104));
console.log(sumOfNaturalNumbers(7551041));
console.log(sumOfNaturalNumbers(75510418));
console.log(sumOfNaturalNumbers(755104185));
console.log(sumOfNaturalNumbers(7551041853));