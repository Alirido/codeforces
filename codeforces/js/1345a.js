/*  
    A. Puzzle Pieces
    Time limit 1 s
    Memory Limit 256 MB
*/

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


function main() {
    const t = +(readLine());

    for (let i=0; i<t; i++) {
        const [n, m] = readLine().split(' ');

        if (n == 1 || m == 1 || (n == 2 && m == 2))
            console.log("YES");
        else
            console.log("NO");
    }
}