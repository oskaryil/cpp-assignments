var antalPersoner = 7;
var preferenser = "BAVIABH";
var nonSuccess = 0;
var success = 0;

var stolar = [];

function getChair(num, preference) {
  stolar[num] = {
      preference: '',
      nonSuccess: false,
  }
  setPreference(preference, num);
}

function setPreference(preference, num) {
  switch(preference) {
    case 'B':
      stolar[num].rightArm = true;
      stolar[num].leftArm = true;
      break;
    case 'V':
      stolar[num].leftArm = true;
      stolar[num].rightArm = false;
      break;
    case 'H':
      stolar[num].rightArm = true;
      stolar[num].leftArm = false;
      break;
    case 'A':
      stolar[num].anyArm = true;
      stolar[num].leftArm = false;
      stolar[num].rightArm = false;
      break;
    case 'I':
      stolar[num].rightArm = false;
      stolar[num].leftArm = false;
  }
  stolar[num].preference = preference;
  arrangeChairs(num);
}



function arrangeChairs(num) {
    if(stolar[num+1].leftArm && stolar[num-1].rightArm) {
      nonSuccess++;
      stolar[i].nonSuccess = true;
    }
    console.log(stolar[num]);
}

var preferenserArray = preferenser.split('');

for(var i = 0; i < antalPersoner; i++) {
  // stolar[i] = {
  //   'taken': false,
  //   'rightArm': false,
  //   'leftArm': false,
  //   'bothArms': false,
  //   'preference': ''
  // }

  getChair(i, preferenserArray[i]); 
}

console.log(preferenserArray);
for(var i = 0; i < preferenserArray; i++) {
  console.log('run');
  stolar[i][i].preference = preferenserArray[i];
}


console.log(stolar);



// var preferensDefintions = {
//   'V': 'leftArm',
//   'H': 'rightArm',
//   'A': 'anyArm',
//   'B': 'bothArms',
//   'I': 'noArm'
// }
// var test = 'B';
// var test2 = preferensDefintions[test];
// // console.log(test2);
// // console.log(stolar[0][test2]);

// function checkIfAvailable(preferens) {
//   for(var i in stolar) {
//     if(!stolar[i]['taken']) {
//       if(!stolar[i][preferens]) {
        
//       }
//     }
//   }
// }

// var preferenserArray = preferenser.split('');

// preferenserArray.forEach(function(preferens) {
//   checkIfAvailable(preferens);
//   switch(preferensDefintions[preferens]) {
//     case 'leftArm':
//       checkIfAvailable
//     case 'rightArm':,
//     case 'anyArm':
//     case 'bothArms':
//     case 'noArm':
//   }
// });

// console.log(stolar);