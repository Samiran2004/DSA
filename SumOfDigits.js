function SumOfDigits(num) {
    sum = 0;
    for (i = 0; i < num.toString().length; i++) {
        rem = num % 10;
        sum = sum + rem;
        num = Math.floor(num / 10);
    }
    return sum;
}
console.log(SumOfDigits(75));