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

function vowelsAndConsonants(s) {
	let vowels = new Array();
	let consonants = new Array();
	for (let c of s) {
		switch(c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowels.push(c);
				break;
			default:
				consonants.push(c);
		}
	}

	for (let c of vowels)
		console.log(c);
	for (let c of consonants)
		console.log(c);
}

function main() {
	const s = readLine();

	vowelsAndConsonants(s);
}