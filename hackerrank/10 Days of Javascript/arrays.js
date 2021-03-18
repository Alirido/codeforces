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

function getSecondLargest(nums) {
	let largest = 0;
	nums.map(x => {
		if (x > largest)
			largest = x;
	});
	let secondLargest = 0;
	nums.map(x => {
		if (x > secondLargest && x < largest)
			secondLargest = x;
	});
	
	return secondLargest;
}

function main() {
	const n = parseInt(readLine());
	const nums = readLine().split(" ").map(Number);

	console.log(getSecondLargest(nums))
}