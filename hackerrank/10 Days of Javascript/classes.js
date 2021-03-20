class Polygon {
	constructor(arr) {
		this.sides = arr;
	}

	perimeter() {
		let result = 0;
		this.sides.forEach(s => result += s);
		return result;
	}
}

const rectangle = new Polygon([10, 20, 10, 20]);
const square = new Polygon([10, 10, 10, 10]);
const pentagon = new Polygon([10, 20, 30, 40, 43]);

console.log(rectangle.perimeter());
console.log(square.perimeter());
console.log(pentagon.perimeter());