// let js = "amazing";
// console.log(40 + 8 + 23 - 10);
// console.log("Jonas");
// console.log(23);

// let firstName = "Bob";
// console.log(firstName);
// console.log(firstName);
// console.log(firstName);

// let 3years = 3;
// let new = 27;
// let $function = 23;
// console.log($function);

// let name = "Jonas"; //Never name a variable name

// let Person = "Jonas";
//Don't start the variable name with the upper case letter we use them in the object oriented progamming  --> It's not illegal

// let PI = 3.1415;
// all letters of words are kept capital means that we want to use it as a constant Generally we don't use this

//This set of naming is good
// let myFirstJob = "Progammer";
// let myCurrentJob = "Teacher";

//Avoid this
// let job1 = "progammer";
// let job2 = "teacher";

// console.log(myFirstJob);

// let javaScriptIsFun = true;
// console.log(javaScriptIsFun);

// console.log(typeof true);
// console.log(typeof javaScriptIsFun);
// console.log(typeof 23);
// console.log(typeof "string");

// javaScriptIsFun = "Yes!";
// console.log(typeof javaScriptIsFun);

// let year;
// console.log(year);
// console.log(typeof year);

// console.log(year);
// console.log(typeof year);

// console.log(typeof null);

//let const and var
// let age = 30;
// age = 31;

// const birthYear = 1991;
// birthYear = 1992; //Gives the error
// const job; //Can't declare empty constant variable

// var job = "programmer";
// job = "teacher";

// lastName = "Jha";
// console.log(lastName);

//Basic Operators
// const now = 2037;
// const ageShivansh = now - 2003;
// const ageSarah = now - 2032;
// console.log(ageShivansh, ageSarah);

// console.log(ageShivansh * 2, ageShivansh / 10, 2 ** 3);
//2**3 means 2 to the power 3 = 2 * 2 * 2

// const firstName = "Shivansh";
// const lastName = "Kumar Jha";
// console.log(firstName + " " + lastName);

//Assignment Operators
// let x = 10 + 5;
// x += 10;
// x -= 2;
// x *= 45;
// x /= 2;
// x++;
// x--;
// console.log(x);

//Comparison Operators
// console.log(ageSarah > ageShivansh);
// console.log(ageSarah < ageShivansh);
// console.log(ageSarah <= ageShivansh);
// console.log(now - 1991 > now - 2018);

// Precedence of Operators
// console.log(25 - 10 - 5);

// let x, y;
// x = y = 25 - 10 - 5;
// console.log(x, y);
// const averageAge = (ageShivansh + ageSarah) / 2;
// console.log(averageAge);

//Strings and Template literals
// const firstName = "Shivansh";
// const job = "Student";
// const birthYear = 1991;
// const year = 2037;

// const Shivansh =
//   "I'm " + firstName + ", a " + (year - birthYear) + " year old " + job + "!";
// console.log(Shivansh);

//Writing a template string - ES6 Feature
// const ShivanshNew = `I'm ${firstName}, a ${year - birthYear} year old ${job}!`;
// console.log(ShivanshNew);
// console.log(`Just a regular string...`);

// Before ES6
// console.log('String with \n\
// multiple \n\
// lines');

// After ES6
// console.log(`String with
// multiple
// lines`);

//If-Else Loops
// const age = 15;

// if (age >= 18) {
//   console.log("Sarah can start driving license 🚗");
// } else {
//   const yearsLeft = 18 - age;
//   console.log(`Sarah is too young. Wait another ${yearsLeft} years :)`);
// }

// const birthYear = 1991;
// let century;
// if (birthYear <= 2000) {
//   century = 20;
// } else {
//   century = 21;
// }
// console.log(century);

//Type Conversion
// const birthYear = '1991';
// console.log(birthYear + 18);
// console.log(Number(birthYear) + 18);
// console.log(Number('Shivansh'));
// console.log(typeof NaN);
// console.log(String(23) , 23);

//Type Coercion
// console.log('I am ' + 23  + ' years old')
// console.log('23' - '10' -3);
// console.log('23' * '2');

// let n ='1' +1;
// n -= 1;
// console.log(n);

// Truthy and Falsy Values
// console.log(Boolean(0));
// console.log(Boolean(''));
// console.log(Boolean(NaN));
// console.log(Boolean(undefined));
// console.log(Boolean({}));

// const money = 0;
// if(money) console.log("Don't spend it all :)");
// else console.log('You should get a Job');

// let height;
// if(height) console.log('YAY! Height is defined');
// else console.log('Height is undefined');

//Equality Operators
// const age = "18";
// if (age === 18) console.log("You just become an adult :D");
// if (age == 18) console.log("You just become an adult :D");
// console.log("18" == 18);
// console.log("18" === 18);

// const favourite = Number(prompt("Whats your favourite number?"));
// console.log(favourite);
// console.log(typeof favourite);

// if (favourite === 23) {
//   console.log("Cool! 23 is an amazing number!");
// } else if (favourite === 7) {
//   console.log("7 is also a cool number");
// } else {
//   console.log("Number is not 23 or 7");
// }

// if (favourite !== 23) console.log("Why not 23?");

//Boolean Logic
// And Or Not
// const hasDriverLicense = true;
// const hasGoodVision = false;
// console.log(hasDriverLicense && hasGoodVision);
// console.log(hasDriverLicense || hasGoodVision);
// console.log(!hasDriverLicense);

// const shouldDrive = hasDriverLicense && hasGoodVision;
// if (shouldDrive) {
//   console.log("Sarah is able to drive!");
// } else {
//   console.log("Someone else should drive");
// }

// const isTired= true;
// console.log(hasDriverLicense || hasGoodVision || isTired);

// Switch Statement
// const day = "monday";

// switch (day) {
//   case 'monday':  //day === 'monday
//     console.log('Plan course structure');
//     console.log('Go to coding meetup');
//     break;

//   case 'tuesday':
//     console.log('Prepare theory videos');
//     break;

//   case 'wednesday':
//   case 'thursday':
//     console.log('Write code examples');
//     break;

//   case 'friday':
//     console.log('Record videos');
//     break;

//   case 'saturday':
//   case 'sunday':
//     console.log('Enjoy the weekend :D');
//     break;

//   default:
//     console.log('Not a valid day!');
// }

//Ternary Operators
// const age = 23;
// age >= 18
  // ? console.log("I like to drink wine 🍷")
//   : console.log("I like to drink water💧");

// const drink = age >= 18 ? "wine 🍷" : "water💧";
// console.log(drink);
