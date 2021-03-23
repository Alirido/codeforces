/*  
    C. Ternary XOR
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

function generateTernaryXOR(x) {
    let a = '';
    let b = '';
    let freeRest = false;
    for (const c of x) {
        if (freeRest) {
            a += '0';
            b += c;
        } else {
            if (c == 1) {
                a += '1';
                b += '0';
                freeRest = true;
            } else if (c == 2) {
                a += '1';
                b += '1';
            } else {
                a += '0';
                b += '0';
            }
        }
    }
    console.log(a);
    console.log(b);
}

function main() {
    const t = +(readLine());

    for (let i=0; i<t; i++) {
        const n = +(readLine());
        const x = readLine();

        generateTernaryXOR(x);
    }
}