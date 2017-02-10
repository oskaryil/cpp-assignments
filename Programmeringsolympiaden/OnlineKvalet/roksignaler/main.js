const readline = require('readline');
var fs = require('fs');

fs.readFile('./testdata/sample1-alphabet.in', function(err, data) {
  if(err) {
    return console.error(err);
  }
  var dataArray = data.toString().split('\n');
  var fileData = data.toString().split('\n', 26);
  var restData = [];
  restData[0] = dataArray[26];
  restData[1] = dataArray[27];
  restData[2] = dataArray[28];
  var S = restData[0].split(' ')[0];
  var P = restData[0].split(' ')[1];
  var T = restData[1].split(' ')[0];
  var B = restData[1].split(' ')[1];
  var M = restData[1].split(' ')[2];
  var N = restData[2].split(' ')[0];
  var morsecode = restData[2].split(' ')[1];
  var alphabet = [];
  var definitions = {}; // OBSJECT ThAT STORES LETTERS AND MORSE CODE EQUIVALENTS
  for(var i = 0; i < fileData.length; i++) {
    alphabet[i] = fileData[i].split(' ')[0];
    definitions[fileData[i].split(' ')[0]] = fileData[i].split(' ')[1];
  }
  // for(var i = 0; i < 26; i++) {
  //   fileData[i] = data.toString().split('\n')[i];
  // }
  // console.log(fileData);
  // console.log(definitions);
});

// string nyBokstav = "";
// string streck = "";
// string punkt  = "";
// string paus  = "";
// string mellanslag  = "";
// for(int i = 0; i < B; i++) {
//   nyBokstav += "0";
// }

// for(int i = 0; i < S; i++) {
//   streck += "1";    
// }

// for(int i = 0; i < P; i++) {
//   punkt += "1";
// }

// for(int i = 0; i < T; i++) {
//   paus += "0";
// }

// for(int i = 0; i < M; i++) {
//   mellanslag += "0";
// }


// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout
// });



// for(var i = 0; i < 26; i++) {
//   rl.question('', (answer) => {
//     // TODO: Log the answer in a database
//     // console.log(`Thank you for your valuable feedback: ${answer}`);

//     var letter = answer.substr(0, 1);
//     var morseCode = answer.substr(1, answer.length);


//   }); 
// }

// rl.close();
