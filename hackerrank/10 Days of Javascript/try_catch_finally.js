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

function reverseString(s) {
	var ans = s;

	try {
		let splitString = s.split("");

		let reversedString = splitString.reverse();

		ans = reversedString.join("");
	} catch (error) {
		console.log(error.message);
	} finally {
		console.log(ans);
	}
}

function main() {
	const s = eval(readLine());

	reverseString(s);
}