function firstOccurance(string, substring) {
    return string.indexOf(substring);
}
let string = "leetcode";
let substring = "code";
let result = firstOccurance(string, substring);
console.log(result);

// // Another process.....

function anotherProcess(mainString, searchString) {
    if (searchString === '') {
        return 0;
    }
    const s = mainString.indexOf(searchString);
    if (mainString.includes(searchString)) {
        return s;
    }
    else {
        return -1;
    }
}
let mainString = "Samiran";
let searchString = "an";
if (anotherProcess(mainString, searchString)) {
    console.log(anotherProcess(mainString, searchString));
}
else {
    console.log("NOT FOUND");
}