'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function decodeBorzeCode(s) {
    let dash = false;
    let ans = '';
    [...s].forEach(c => {
        if (dash) {
            if (c == '.')
                ans += '1';
            else
                ans += '2';
            dash = false;
        } else {
            if (c == '.')
                ans += '0';
            else
                dash = true;
        }
    });
    return ans;
}


function main() {
    const s = readLine();
    
    console.log(decodeBorzeCode(s));
}