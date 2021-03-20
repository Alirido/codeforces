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

function Rectangle(length, width) {
	this.length = length;
	this.width = width;

	this.perimeter = 2*(this.length + this.width);
	this.area = this.length * this.width;

	// this.perimeter = function() {
	// 	return 2 * (this.length + this.width);
	// }

	// this.area = function() {
	// 	return this.length * this.width;
	// }
}

function main() {
	const length = +(readLine());
	const width = +(readLine());

	const rec = new Rectangle(length, width);

	console.log(rec.length);
	console.log(rec.width);
	console.log(rec.perimeter);
	console.log(rec.area);
}