let s = "abcd";
let t = "cabd";
if ((s.split('').sort().join('')) === (t.split('').sort().join(''))) {
    console.log("This is a valid anagram...");
}
else {
    console.log("This is not a valid anagram...");
}