function processData(input) {
    var arr = input.split("");
    var w = false;
    var c = 0;
    var l = 0;
    for(var i =0; i < arr.length;i++) {
        if(arr[i] == "U") {
            l++;
            
        } else if(arr[i] == "D") {
            
            l--;
            if(l == -1) {
                c++;
            }
        }
    }
    console.log(c);
    
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", (input) => {
    _input += input;
    console.log(_input);
});

process.stdin.on("end", function () {
    console.log("testing alirido");
   processData(_input);
});

process.stdin.on("close", function () {
    // console.log("testing alirido");
   processData(_input);
});