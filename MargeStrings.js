function margeString(word1, word2) {
    let word1Length = word1.length;
    let word2Length = word2.length;
    let ans = "";
    for (let i = 0; i < word1Length || i < word2Length; i++) {
        if (i < word1Length) {
            ans = ans + word1[i];
        }
        if (i < word2Length) {
            ans = ans + word2[i];
        }
    }
    return ans;
}
let word1 = "Sam";
let word2 = "Samanta";
console.log(margeString(word1, word2));