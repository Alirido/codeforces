'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', input => {
	inputString += input;
});

process.stdin.on('end', _ => {
	inputString = inputString.trim().split('\n').map(str => {
		return str.trim();
	});

	main();
});

function readLine() {
	return inputString[currentLine++];
}

function sides(literals, ...expressions) {
	let a = expressions[0];
    let p = expressions[1];
    
    let s1 = (p + Math.sqrt(p*p - 16*a))/4;
    let s2 = (p - Math.sqrt(p*p - 16*a))/4;

    return s1 <= s2 ? [s1, s2] : [s2, s1];
}


function main() {
	let s1 = +(readLine());
    let s2 = +(readLine());
    
    [s1, s2] = [s1, s2].sort();
    
    const [x, y] = sides`The area is: ${s1 * s2}.\nThe perimeter is: ${2 * (s1 + s2)}.`;
    
    console.log((s1 === x) ? s1 : -1);
    console.log((s2 === y) ? s2 : -1);
}