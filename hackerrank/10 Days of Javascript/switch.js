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

function getLetter(s) {
	switch (s[0]) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return "A";
			break;
		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
			return "B";
			break;
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
			return "C";
			break;
		default:
			return "D";
	}
}

function main() {
	const s = readLine();

	console.log(getLetter(s));
}