function lengthOfLastWord(word) {
    // return sc.trim().split('');
    // let wordLength = word.length;
    // let endOfTheWord = wordLength - 1;
    let wordArr = word.trim().split('');
    let endOfTheWord = wordArr.length-1;
    let i, ans = "";
    for (i = endOfTheWord; i >= 0; i--) {
        if (wordArr[i] === ' ') {
            break;
        }
        else {
            ans = ans + wordArr[i];
        }
    }
    return ans.length;
}
let scen = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris suscipit, mauris ac rhoncus tempor, quam justo porta risus, nec bibendum diam diam eu massa. Donec molestie, sem vel vulputate elementum, ligula libero condimentum odio, ut facilisis magna sapien nec odio. Vivamus ultricies tristique tellus non consectetur. Nam semper velit eget faucibus rhoncus. Mauris et efficitur leo, quis semper leo. Pellentesque convallis id dui id finibus. Aenean gravida arcu at dignissim iaculis";
console.log(lengthOfLastWord(scen));