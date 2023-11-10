function palindrome(num) {
    let copyNum = num, revNum = 0;
    while (copyNum > 0) {
        let rem = copyNum % 10;
        revNum = (revNum * 10) + rem;
        copyNum = Math.floor(copyNum / 10);
    }
    if (num === revNum) {
        console.log(`${num} is a Palindrome number...`);
    }
    else {
        console.log(`${num} is not a Palindrome number...`);
    }
}
palindrome(10100010);
palindrome(1001);
palindrome(100);
palindrome(10010002001);