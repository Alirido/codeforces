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

function solve(s) {
	let sum = 0;
	while (s >= 10) {
		let temp = Math.floor(s/10);
		sum += temp*10;
		s = (s%10) + temp;
	}
	sum += s;
	return sum;
}

function main() {
	const t = +(readLine());

	for (let i=0; i<t; i++) {
		var s = +(readLine());

		console.log(solve(s));
	}
}
