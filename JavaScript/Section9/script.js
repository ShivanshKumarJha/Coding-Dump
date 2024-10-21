// 'use strict';

// const weekdays = ['mon', 'tue', 'wed', 'thu', 'fri', 'sat', 'sun'];
// const openingHours = {
//   // Third enhancement likewise in the [weekdays[i]]: {}
//   [weekdays[3]]: {
//     open: 12,
//     close: 22,
//   },
//   [weekdays[4]]: {
//     open: 11,
//     close: 23,
//   },
//   [weekdays[5]]: {
//     open: 0,
//     close: 24,
//   },
// };

// const restaurant = {
//   name: 'Hyat',
//   location: 'Faridabad,Haryana',
//   categories: ['india', 'european', 'chinese'],
//   starterMenu: ['choleBhature', 'pizza', 'chowmein'],
//   mainMenu: ['gobhi', 'sandwich', 'pasta'],

//   // ES6 enhanced object literals First enhancement using objectName directly as the object
//   openingHours,

//   // Second enhancement -> without writing function instead directly define the function
//   order(starterIndex, mainIndex) {
//     return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
//   },

//   orderDelivery(starterIndex = 1, mainIndex = 0, time = '20:00', address) {
//     console.log(
//       `Order received ${this.starterMenu[starterIndex]} and ${this.mainMenu[mainIndex]} will be delivered to ${address} at ${time}`
//     );
//   },

//   orderPasta(ing1, ing2, ing3) {
//     console.log(
//       `Here is your delicious pasta with ingredients ${ing1}, ${ing2}, ${ing3}`
//     );
//   },

//   orderPizza(mainIngredient, ...otherIngredients) {
//     console.log(mainIngredient);
//     console.log(otherIngredients);
//   },
// };

// // Destructuring Objectsz
// // const { name, openingHours, categories } = restaurant;
// // console.log(name, openingHours, categories);

// // const {
// //   name: restaurantName,
// //   openingHours: hours,
// //   categories: tags,
// // } = restaurant;
// // console.log(restaurantName, hours, tags);

// // Default values
// // const { menu = [], starterMenu: starters = [] } = restaurant;
// // console.log(menu, starters);

// // Mutating variables
// // let a = 111;
// // let b = 999;
// // const obj = { a: 23, b: 7, c: 99 };
// // ({ a, b } = obj);
// // console.log(a, b);

// // Nested Objects
// // const {
// //   fri: { open: o, close: c },
// // } = openingHours;
// // console.log(o, c);

// // const arr = [2, 3, 4];
// // const a = arr[0];
// // const b = arr[1];
// // const c = arr[2];

// // Destructuring the array
// // const [x, y, z] = arr;
// // console.log(x, y, z);
// // console.log(arr);

// // const [first, second] = restaurant.categories;
// // console.log(first, second);

// // let [main, , secondary] = restaurant.categories;
// // console.log(main, secondary);

// // Switching variables
// // const temp = main;
// // main = secondary;
// // secondary = temp;
// // console.log(main,secondary);

// // [main, secondary] = [secondary, main];
// // console.log(main, secondary);

// // const [starter, mainCourse] = restaurant.order(2, 0);
// // console.log(starter, mainCourse);

// // Nested destructuring
// // const nested = [2, 4, [5, 6]];
// // const [i,,j] = nested;
// // console.log(i,j);
// // const [i, , [j, k]] = nested;
// // console.log(i, j, k);

// // Default Values
// // const [p = 1, q = 1, r = 1] = [8, 9];
// // console.log(p, q, r);

// // Spread Operator
// // const arr = [7, 8, 9];
// // const newArr = [1, 2, ...arr];
// // console.log(newArr);

// // These two are same
// // console.log(...newArr);
// // console.log(1, 2, 7, 8, 9);

// // const newMenu = [...restaurant.mainMenu, 'Brocolli'];
// // console.log(newMenu);

// // Spread operator takes all the elements from the array and it also doesn't create new variables and as a consequence,we can only use it in places where we would otherwise write values separated by commas

// // Two important use cases:
// // 1.To create shallow copies the array
// // 2.To merge the two arrays together

// // Copy array
// // const mainMenuCopy = [...restaurant.mainMenu];

// // Join 2 arrays
// // const menu = [...restaurant.mainMenu,...restaurant.starterMenu];
// // console.log(menu);

// // Iterables are  arrays,string,map,set but not objects

// // const str = 'Shivansh';
// // const letters = [...str, ' ', ...'Kumar Jh', 'a'];
// // console.log(letters);

// // These two are same
// // console.log(...str);
// // console.log('s', 'h', 'i', 'v', 'a', 'n', 's', 'h');

// // Real world examples
// // const ingredients = ['a', 'b', 'c'];
// // console.log(ingredients);
// // restaurant.orderPasta(...ingredients);

// // Objects
// // const newRestaurant = {
// //   foundingYear: '1999',
// //   ...restaurant,
// //   founder: 'Shivansh',
// // };
// // console.log(newRestaurant);

// // const restaurantCopy = {...restaurant};
// // restaurantCopy.name = 'Taj Hotel';
// // console.log(restaurantCopy.name);
// // console.log(restaurant.name);

// // 1) Destructuring
// // Spread Operator because on right side of =
// // const arr = [1, 2, ...[3, 4]];
// // console.log(arr);

// // Rest because on left side of =
// // const [a, b, ...others] = [1, 2, 3, 4, 5];
// // console.log(a, b, others);

// // const [pizza, , risotto, ...otherfood] = [
// //   ...restaurant.mainMenu,
// //   ...restaurant.starterMenu,
// // ];
// // console.log(pizza, risotto, otherfood);

// // Objects
// // const { sat, ...weekdays } = restaurant.openingHours;
// // console.log(sat, weekdays);

// // 2) Functions
// // const add = (...numbers) => {
// // console.log(numbers);
// //   let sum = 0;
// //   for (let i = 0; i < numbers.length; i++) sum += numbers[i];
// //   console.log(sum);
// // };
// // add(2, 3);
// // add(5, 3, 7, 2);
// // add(1, 2, 3, 4, 5, 6, 7);

// // const x = [23, 5, 7];
// // add(...x);

// // Spread operator unpacks the array elements while the rest operator packs the multiple parameters into one array

// // restaurant.orderPizza('mushrooms', 'onion', 'spinach', 'olives');
// // restaurant.orderPizza('mushrooms');

// // Spread operator is used where we define the multiple values seperated by the commas while the rest operator is used where we write the variables name by comma

// // use any data type,return any data type ,short circuit evaluation

// // In case of or operator it means that if the first operator is truthy value then it will automatically return that value

// // console.log('-------OR-------');
// // console.log(3 || 'Shivansh');
// // console.log('' || 'Shivansh');
// // console.log(true || 0);
// // console.log(undefined || null);

// // console.log(undefined || 0 || '' || 'hello' || 23 || null);

// // restaurant.numGuests = 23;
// // const guests1 = restaurant.numGuests ? restaurant.numGuests : 10;
// // console.log(guests1);

// // const guests2 = restaurant.numGuests || 10;
// // console.log(guests2);

// // console.log('-------AND-------');
// // In case of or operator it means that if the first operator is falsy value then it will automatically return that value
// // console.log(0 && 'Shivansh');
// // console.log(7 && 'Shivansh');
// // console.log('Hello' && 23 && null && 'Shivansh');

// // Practical example
// // if (restaurant.orderPizza) {
// //   restaurant.orderPizza('mushroom', 'spinach');
// // }

// // if restaurant.orderPizza exists then it will execute the other statement and if it falsy (or doesn't exist) then it will short circuit the evaluation and doesn't move further

// // console.log(restaurant.orderPizza && restaurant.orderPizza('mushroom', 'spinach'));

// // Nullish Coalescing operator --> introduces in ES2020
// // restaurant.numGuests = 23;
// // const guests = restaurant.numGuests || 10;
// // console.log(guests);

// // ?? operator works on the concept of nullish value(undefined and null not the zero) instead of falsy values
// // means if the restaurant.numGuests value is not defined or null then it will take the other vale otherwise take that default value
// // const guestCorrect = restaurant.numGuests ?? 10;
// // console.log(guestCorrect);

// // 3 Logical assignment operator introduced in ES2021
// // const rest1 = {
// //   name: 'Shiv',
// //   numGuests: 20,
// // };

// // const rest2 = {
// //   name: 'Ravi',
// //   owner: 'Shivansh',
// // };

// // OR assignment operator
// // rest1.numGuests ||= 10;
// // rest2.numGuests ||= 10;

// // Logical nullish operator works on the concept of nullish value
// // rest1.numGuests ??= 10;
// // rest2.numGuests ??= 10;

// // AND assignment operator
// // rest2.owner &&= 'anonymous';
// // console.log(rest2.owner);

// // Coding Challenge 1
// const game = {
//   team1: 'Bayern Munich',
//   team2: 'Borrussia Dortmund',
//   players: [
//     [
//       'Neuer',
//       'Pavard',
//       'Martinez',
//       'Alaba',
//       'Davies',
//       'Kimmich',
//       'Goretzka',
//       'Coman',
//       'Muller',
//       'Gnarby',
//       'Lewandowski',
//     ],
//     [
//       'Burki',
//       'Schulz',
//       'Hummels',
//       'Akanji',
//       'Hakimi',
//       'Weigl',
//       'Witsel',
//       'Hazard',
//       'Brandt',
//       'Sancho',
//       'Gotze',
//     ],
//   ],
//   score: '4:0',
//   scored: ['Lewandowski', 'Gnarby', 'Lewandowski', 'Hummels'],
//   date: 'Nov 9th, 2037',
//   odds: {
//     team1: 1.33,
//     x: 3.25,
//     team2: 6.5,
//   },
// };

// // const [player1, player2] = game.players;
// // console.log(player1,player2);

// // const [gk, ...fieldPlayers] = player1;
// // console.log(gk,fieldPlayers);

// // const allPlayers = [...player1, ...player2];
// // console.log(allPlayers);

// // const playersFinal = [...player1, 'Thiago', 'Coutinho', 'Perisic'];
// // console.log(playersFinal);

// // const {
// // odds: { team1, x: draw, team2 },
// // } = game;
// // console.log(team1,draw,team2);

// // const printGoals = (...players) => {
// // console.log(`${players.length} goals were scored`);
// // };

// // printGoals('Davies', 'Muller', 'Lewandowski', 'Kimmich', 'Shivansh');
// // printGoals(...game.scored);

// // team1 < team2 && console.log('Team1 is more likely to win');
// // team1 > team2 && console.log('Team2 is more likely to win');

// // for of loop
// // const menu = [...restaurant.starterMenu,...restaurant.mainMenu];
// // for(const item of menu) console.log(item);
// // To get also the index of the menu items
// // destructuring in for-of loop
// // for(const [i,el] of menu.entries()) console.log(`${i+1}: ${el}`);

// // Enhanced object literals
// // Three methods we have discussed in restaurant object and that is called enhances object literals

// // Optional chaining in ES2020-checking if the property is not nullish
// // .open will only happen if restaurant.openingHours.mon exists otherwise it will return undefined
// // console.log(restaurant.openingHours.mon?.open);

// // Example
// // const days = ['mon', 'tue', 'wed', 'thu', 'fri', 'sat', 'sun'];
// // for (const day of days) {
// //   console.log(restaurant.openingHours[day]?.open ?? 'closed');
// // }

// // Methods
// // console.log(restaurant.orderPizza?.(0, 1) ?? 'Method does not exist');

// // Arrays
// // const users = [{ name: 'Shivansh', email: 'kumarjhashivansh@gmail.com' }];
// // const users = [];
// // console.log(users[0]?.name ?? 'User array empty');

// // const properties = Object.keys(openingHours);
// // console.log(properties);

// // let openStr = `We are open on ${properties.length} days: `;

// // for (const day of properties) {
// //   openStr += `${day}, `;
// // }
// // console.log(openStr);

// // const values = Object.values(openingHours);
// // console.log(values);
// // entries = keys + values

// // const entries = Object.entries(openingHours);
// // console.log(entries);

// // value of the entries are itself an object hence we have to destructure that also
// // for (const [key, { open, close }] of entries)
// //   console.log(`On ${key} we open at ${open} and close at ${close}`);

// // CODING CHALLENGE 2
// // for(const [i,player] of game.scored.entries()){
// //   console.log(`Goal ${i+1}: ${player}`);
// // }

// // const odds = Object.values(game.odds);
// // let average = 0;
// // for (const odd of odds) {
// //   average += odd;
// // }
// // average /= odds.length;
// // console.log(average);

// // for (const [team, odd] of Object.entries(game.odds)) {
// //   console.log(team,odd);
// //   const teamStr = team === 'x' ? 'draw' : `victory ${game[team]}`;
// //   console.log(`Odd of ${teamStr} ${odd}`);
// // }

// // Sets data structure-collection of unique values
// // const orderSet = new Set([
// //   'Pasta',
// //   'Pizza',
// //   'Pizza',
// //   'Risotto',
// //   'Pasta',
// //   'Pizza',
// // ]);

// // console.log(orderSet);
// // set is also iterable just like arrays
// // console.log(new Set('Shivansh'));
// // console.log(orderSet.size);
// // console.log(orderSet.has('Bread'));
// // orderSet.add('Garlic Bread');
// // console.log(orderSet);
// // orderSet.delete('Risotto');
// // console.log(orderSet);
// // orderSet.clear();

// // for (const order of orderSet) console.log(order);

// // const staff = ['Waiter', 'Chef', 'Waiter', 'Manager', 'Chef', 'Waiter'];
// // Array to set
// // const staffUnique = new Set(staff);
// // console.log(staffUnique);
// // OP { 'Waiter', 'Chef', 'Manager' }
// // Now we want to put the set elements in one array
// // const staffArray = [...new Set(staff)];
// // console.log(staffArray);
// // OP [ 'Waiter', 'Chef', 'Manager' ]
// // console.log(new Set('ShivanshKumarJha').size);

// // Map data structures
// // In the object the key should be the string while in the map it can be of any data type

// // const rest = new Map();
// // rest.set('name', 'Classico Italino');
// // rest.set(1, 'Firenze,Italy');
// // rest.set(2, 'Lisbon,Portugal');
// // console.log(rest);

// // rest
// //   .set('categories', ['Italian', 'Pizzeria', 'Vegeterian', 'Organic'])
// //   .set('open', 11)
// //   .set('close', 22)
// //   .set(true, 'We are open :D')
// //   .set(false, 'We are closed :(');
// // console.log(rest);
// // console.log(rest.get('name'));

// // console.log(rest.has('categories'));
// // rest.delete(2);
// // console.log(rest);
// // console.log(rest.size);

// // const arr = [1,2];
// // rest.set(arr, 'Test');
// // console.log(rest);

// // console.log(rest.get([1, 2]));
// // OP not refer to the same object hence the output is undefined
// // console.log(rest.get(arr));
// // will refer to the same object

// // Iteration in map
// // const question = new Map([
// //   ['question', 'What is the best progamming language in the world?'],
// //   [1, 'C'],
// //   [2, 'Java'],
// //   [3, 'JavaScript'],
// //   ['correct', 3],
// //   [true, 'Correct'],
// //   [false, 'Try Again'],
// // ]);
// // console.log(question);
// // console.log();

// // Convert Object to map
// // console.log(Object.entries(openingHours));
// // const hoursMap = new Map(Object.entries(openingHours));
// // console.log(hoursMap);

// // console.log(question.get('question'));
// // for (const [key, value] of question) {
// //   if (typeof key == 'number') console.log(`Answer ${key}: ${value}`);
// // }
// // const answer = Number(prompt('Your Answer'));
// // console.log(answer);

// // Convert map to array
// // console.log([...question]);
// // console.log([...question.entries()]);
// // console.log([...question.keys()]);
// // console.log([...question.values()]);

// // Coding Challenge 3
// // const gameEvents = new Map([
// // 	[17, '⚽️ GOAL'],
// // 	[36, '🔁 Substitution'],
// // 	[47, '⚽️ GOAL'],
// // 	[61, '🔁 Substitution'],
// // 	[64, '🔶 Yellow card'],
// // 	[69, '🔴 Red card'],
// // 	[70, '🔁 Substitution'],
// // 	[72, '🔁 Substitution'],
// // 	[76, '⚽️ GOAL'],
// // 	[80, '⚽️ GOAL'],
// // 	[92, '🔶 Yellow card'],
// // ]);

// // const events = new Set(...[gameEvents.values()]);
// // console.log(events);

// // gameEvents.delete(64);
// // console.log(gameEvents);

// // console.log(`An event happened, on
// // average, every ${90 / gameEvents.size} minutes`);

// // for (const [min, event] of gameEvents) {
// //   const half = min <= 45 ? 'FIRST' : 'SECOND';
// //   console.log(`${half} HALF ${min}: ${event}`);
// // }

// // Working with strings
// /*
// const airline = 'TAP Air Portugal';
// const plane = 'A320';
// console.log(airline.indexOf('r'));
// console.log(airline.lastIndexOf('r'));
// console.log(airline.indexOf('Portugal'));
// console.log(airline.slice(4));              
// console.log(airline.slice(4,8));            
// console.log(airline.slice(0,airline.indexOf(' ')));
// console.log(airline.slice(airline.lastIndexOf(' ')+1));
// console.log(airline.slice(-2));
// */

// // const checkMiddleSeat = function(seat){
// // B and E are middle seat
// //   const s = seat.slice(-1);
// //   if(s == 'B' || s == 'E') console.log("YES");
// //   else console.log("NO");
// // }

// // checkMiddleSeat('11B');
// // checkMiddleSeat('12C');

// // const passenger = 'jOnAs';
// // const passengerLower = passenger.toLowerCase();
// // const passengerCorrect = passengerLower[0].toUpperCase() + passengerLower.slice(1);
// // console.log(passengerCorrect);

// // Comparing emails
// // const email = 'hello@jonas.io';
// // const loginEmail = '  Hello@Jonas.Io \n';

// // const lowerEmail = loginEmail.toLowerCase().trim();
// // console.log(lowerEmail);
// // console.log(email === lowerEmail);

// // const priceGB = '288,97£';
// // const priceUS = priceGB.replace('£','$').replace(',','.');
// // console.log(priceUS);

// // Booleans
// // const plane = 'AirBus A320neo';
// // console.log(plane.includes('A320'));
// // console.log(plane.startsWith('Air'));
// // console.log(plane.endsWith('neo'));

// // Split()
// console.log('A+very+good+string'.split('+'));
// const [firstName, lastName] = 'Shivansh Jha'.split(' ');
// console.log(firstName, lastName);

// const newName = ['Mr.', firstName, lastName.toUpperCase()].join(' ');
// console.log(newName);

// const capitalizeName = function (name) {
//   const names = name.split(' ');
//   const namesUpper = [];
//   for (const n of names) namesUpper.push(n[0].toUpperCase() + n.slice(1));
//   console.log(namesUpper.join(' '));
// };

// capitalizeName('jessica ann smith davis');
// capitalizeName('shivansh kumar jha'); 

// // Padding the string
// const message = 'Go to gate 23!';
// console.log(message.padStart(25,'+').padEnd(50,'+'));

// const message2 = 'Hello';
// console.log(message2.repeat(5));

// // Coding Challenge
// const flights ='_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30';

// // 🔴 Delayed Departure from FAO to TXL (11h25)
// //              Arrival from BRU to FAO (11h45)
// //   🔴 Delayed Arrival from HEL to FAO (12h05)
// //            Departure from FAO to LIS (12h30)

// const getCode = str => str.slice(0, 3).toUpperCase();
// for(const flight of flights.split('+')){
// 	const [type, from, to, time] = flight.split(';');
// 	const output = `${type.startsWith('_Delayed') ? '🔴' : ''}${type.replaceAll('_',' ')} ${getCode(from)} ${getCode(to)} 
// 	(${time.replace(':', 'h')})`.padStart(36);
// 	console.log(output);
// }

console.log("Hello");