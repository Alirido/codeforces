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

function modifyArray(nums) {
    const modifiedArr = nums.map(x => x%2 == 0? x*2 : x*3);

    return modifiedArr;

    // return nums.map(i => (i & 1) ? i * 3 : i * 2);
}


function main() {
	const n = +(readLine());
    const a = readLine().split(' ').map(Number);
    
    console.log(modifyArray(a).toString().split(',').join(' '));
}