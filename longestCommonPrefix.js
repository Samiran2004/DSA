function longestCommonPrefix(str) {
    str.sort();
    const firstStr = str[0];
    const lastStr = str[str.length - 1];

    let prefix = "";
    for (let i = 0; i < firstStr.length; i++) {
        if (firstStr[i] === lastStr[i]) {
            prefix += firstStr[i];
        } else {
            break;
        }
    }

    return prefix;
}
const str = ["flower", "flow", "flight"];
const result = longestCommonPrefix(strings);
console.log(result);
