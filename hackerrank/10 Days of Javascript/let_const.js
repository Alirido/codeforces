'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
	inputString += inputStdin;
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

const PI = Math.PI;

function main() {
	let r = parseFloat(readLine());

	console.log(PI*r*r);
	console.log(2*PI*r);
}