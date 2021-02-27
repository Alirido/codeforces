function processData(input) {
    var strings = input.split('\n');
    strings.shift();
    strings.forEach(processString);
}

function processString(str) {
  var len = str.length,
      changes = 0;
  for (var i = 1; i < len; i++) {
    if (str[i] === str[i - 1]) {
      changes += 1;
    }
  }
  console.log(changes);
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});