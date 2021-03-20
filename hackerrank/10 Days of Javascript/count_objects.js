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

function getCount(a) {
	let count = 0;
	a.map(o => {
		if (o.x==o.y)
			count++;
	});
	return count;
}


function main() {
	const n = +(readLine()); // plus sign is used for parse the input to be integer
	var a = [];
	for (let i=0; i<n; i++) {
		const [x, y] = readLine().split(' ');
		a.push({x: +(x), y: +(y)});
	}
	console.log(getCount(a));
}