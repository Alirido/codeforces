/*function readline() {
	process.stdin.resume();
	process.stdin.setEncoding("ascii");
	_input = "";
	process.stdin.on("data", (input) => {
		_input += input;
	});

	process.stdin.on("end", function() {
		return FindIntersection(_input);
	})
}*/

function FindIntersection(strArr) {
	// console.log(strArr);

  // code goes here 
  let list1 = strArr[0].split(', ');
  let list2 = strArr[1].split(', ');
  console.log(list1);
  let result = list1.filter(a => list2.find(b => b === a));
  return result.length > 0 ? result.join(',') : false;

}
   
// keep this function call here 
// console.log(FindIntersection(readline()));

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
	_input += input;
});

process.stdin.on("end", function() {
	console.log(FindIntersection(_input));
})