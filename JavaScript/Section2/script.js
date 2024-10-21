'use strict';

// let hasDriverLicense = true;
// const passTest = true;

// if (passTest) hasDriverLicense = true;
// if (hasDriverLicense) console.log("I can drive :D");

// function logger() {
//   console.log('My name is Shivansh');
// }
// logger();
// logger();

// function fruitProcessor(apples, oranges) {
//   const juice = `Juice with ${apples} apples and ${oranges} oranges.`;
//   return juice;
// }

// const appleJuice = fruitProcessor(5, 0);
// console.log(appleJuice);

// const appleOrangeJuice = fruitProcessor(2, 4);
// console.log(appleOrangeJuice);

// Function Declarations and Expressions
// Function Declaration
// function calcAge(birthYear) {
//   return 2037 - birthYear;
// }
// const age1 = calcAge(1991);
// console.log(age1);

//Function Expression
// const calcAge2 = function (birthYear) {
//   return 2037 - birthYear;
// };
// const age2 = calcAge2(1991);
// console.log(age1, age2);

//Arrow Functions
// const calcAge3 = birthYear => 2037 - birthYear;
// const age3 = calcAge3(1991);
// console.log(age3);

// const yearsUntilRetirement = (birthYear,firstName)  => {
//   const age = 2037 - birthYear;
//   const retirement = 65 - age;
// return retirement;
//   return `${firstName} retires in ${retirement} years`;
// };
// console.log(yearsUntilRetirement(1991,'Jonas'));

//Function calling another functions
// const cutPieces = function cutFruitPieces(fruit) {
//   return fruit * 4;
// };

// function fruitProcessor(apples, oranges) {
//   const applePieces = cutPieces(apples);
//   const orangePieces = cutPieces(oranges);

//   const juice = `Juice with ${applePieces} pieces of apple and ${orangePieces} pieces of orange.`;
//   return juice;
// }
// const str = fruitProcessor(2, 3);
// console.log(str);

// Arrays
// const friends = ['Michael', 'Steven', 'Peter'];
// console.log(friends);

// const years = new Array(1991, 1984, 2008);

// console.log(years);
// console.log(years[0]);

// console.log(friends.length);
// console.log(friends[friends.length - 1]);

// friends[2] = 'Jay';
// console.log(friends);
// We are able to change the array element even we have defined the array as const because only primitive data type are immutable rest all are mutable

// const Jonas = ['Johns', 'Schem', 2037 - 1991, 'teacher', friends];
// console.log(Jonas);

// Exercise
// const calcAge = function(birthYear){
//   return 2038-birthYear;
// }
// const years = [1990,1945,1986,2008];
// const age1 = calcAge(years[0]);

//More Operations on Array
// const friends = ['Michael', 'Steven', 'Peter'];
// const newLength = friends.push('Jay');
// console.log(friends);
// console.log(newLength);

// friends.unshift('John');
// console.log(friends);

// Remove elements
// const popped = friends.pop();
// console.log(friends);
// console.log(popped);

// friends.shift();
// console.log(friends);

// console.log(friends.indexOf('Steven'));
// console.log(friends.indexOf('Bob'));
// console.log(friends.includes('Steven'));
// console.log(friends.includes('Bob'));

// if(friends.includes('Peter')){
//   console.log(`You have a friend called Peter`);
// }

//Objects
// const JohnsArray = [
//   'Jonas',
//   'Schemt',
//   2037 - 1991,
//   'teacher',
//   ['Michael', 'Peter', 'Steven'],
// ];

// Object Shivansh has 5 properties
// const Shivansh = {
//   firstName: 'Shivansh',
//   lastName: 'Kumar Jha',
//   age: 2037 - 2003,
//   job: 'Student',
//   friends: ['A', 'B', 'C'],
// };

// Dot vs Bracket Notations
// console.log(Shivansh);
// console.log(Shivansh.lastName);
// console.log(Shivansh['lastName']);

// const nameKey = 'Name';
// console.log(Shivansh['first' + nameKey]);
// console.log(Shivansh['last' + nameKey]);

// console.log(Shivansh.'last' + nameKey); Wrong method

// const interestedIn = prompt(
//   'What do you want to know about Shivansh? Choose betweeem firstName,lastName,age,job,and friends'
// );

// if (Shivansh[interestedIn]) {
//   console.log(Shivansh[interestedIn]);
// } else {
//   console.log(
//     `Wrong request! Choose betweeem firstName,lastName,age,job,and friends`
//   );
// }

// Adding new property
// Shivansh.location = 'India';
// Shivansh['twitter'] = `@shiv26_2003`;
// console.log(Shivansh);

// Challenge
// console.log(
//   `${Shivansh.firstName} has ${Shivansh.friends.length} friends, and his best friend is called ${Shivansh.friends[0]}.`
// );

// Object Methods
// const Shivansh = {
//   firstName: 'Shivansh',
//   lastName: 'Kumar Jha',
//   birthYear: 2003,
//   job: 'student',
//   friends: ['A', 'B', 'C'],
//   hasDrivingLicense: true,

//   calcAge: function (birthYear) {
//     return 2037 - birthYear;
//   },

//   calcAge: function () {
// this refers to the complete object pointer
//     console.log(this);
//     return 2037 - this.birthYear;
//   },

//   calcAge: function () {
//     this.age = 2037 - this.birthYear;
//     return this.age;
//   },

//   getSummary: function () {
//     return `${this.firstName} is a ${this.calcAge()}-year old ${
//       this.job
//     }, and ${this.hasDrivingLicense ? 'a' : 'no'} driver's license.`;
//   },
// };

// console.log(Shivansh.calcAge(2003));
// console.log(Shivansh['calcAge'](2003));
// console.log(Shivansh['calcAge'](Shivansh.birthYear));

// console.log(Shivansh['calcAge']());
// console.log(Shivansh.calcAge());
// console.log(Shivansh.age);
// console.log(Shivansh.age);
// console.log(Shivansh.age);

// Challenge
// Shivansh is a 34-year old student, and he has a driver's license.

// console.log(
//   `${Shivansh.firstName} is a ${Shivansh.calcAge()}-year old ${
//     Shivansh.job
//   }, and ${Shivansh.hasDrivingLicense ? 'a' : 'no'} driver's license.`
// );

// console.log(Shivansh.getSummary());

//Loops
// for (let rep = 1; rep <= 10; rep++) {
//   console.log(`Lifting weights repitition ${rep}`);
// }

// const jonas = [
//   'Jonas',
//   'Schemt',
//   2037 - 1991,
//   'teacher',
//   ['Michael', 'Peter', 'Steven'],
// ];

// const types = [];
// for (let i = 0; i < jonas.length; i++) {
//   console.log(jonas[i], typeof jonas[i]);

//   types[i] = typeof jonas[i];
//   types.push(typeof jonas[i]);
// }
// console.log(types);

// const years = [1991, 2003, 1940, 1975];
// const ages = [];

// for (let i = 0; i < years.length; i++) {
//   ages.push(2037 - years[i]);
// }
// console.log(ages);

// Continue and Break
// for (let i = 0; i < jonas.length; i++) {
// if (typeof jonas[i] != 'string') continue;
//   if(typeof jonas[i] === 'number') break
//   console.log(jonas[i], typeof jonas[i]);
// }

// const jonas = [
//   'Jonas',
//   'Schemt',
//   2037 - 1991,
//   'teacher',
//   ['Michael', 'Peter', 'Steven'],
// ];

// for (let i = jonas.length - 1; i >= 0; i--) {
//   console.log(jonas[i], typeof jonas[i]);
// }

// for (let exercise = 1; exercise < 4; exercise++) {
//   console.log(`---------Starting exercise ${exercise}`);

//   for (let rep = 1; rep < 6; rep++) {
//     console.log(`Exercise ${exercise}: Lifting weight repitition ${rep} 🏋️`);
//   }
// }

// while loop
// let rep = 1;
// while (rep <= 10) {
//   console.log(`Lifting weights repitition ${rep} 🏋️`);
//   rep++;
// }

// let dice = Math.trunc(Math.random() * 6) + 1;
// console.log(dice);

// while (dice !== 6) {
//   console.log(`You rolled a ${dice}`);
//   dice = Math.trunc(Math.random() * 6) + 1;
//   if (dice === 6) console.log(`Loop is about to end...`);
// }
