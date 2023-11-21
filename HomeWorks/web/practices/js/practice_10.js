// PART 1

// task 1
// class Car {
//     make;
//     speed;

//     constructor(m, s) {
//         this.make = m;
//         this.speed = s;
//     }

//     accelerate() {
//         this.speed += 10;
//         console.log(this.speed);
//     }
//     brake() {
//         this.speed -= 5;
//         console.log(this.speed);
//     }
// }

// const car1 = new Car("BMW", 120);
// const car2 = new Car("Mercedes", 95);

// car1.accelerate();
// car2.brake();

// task 2
// class CarCl {
//     make;
//     speed;

//     constructor(m, s){
//         this.make = m;
//         this.speed = s;
//     }

//     get speedUS(){
//         return this.speed / 1.6;
//     }

//     set speedUS(speed_mih){
//         this.speed = speed_mih * 1.6;
//     }

//     accelerate() {
//         this.speed += 10;
//         console.log(this.speed);
//     }
//     brake() {
//         this.speed -= 5;
//         console.log(this.speed);
//     }
// }

// const carcl1 = new CarCl("Ford", 120)

// console.log(carcl1.speedUS);
// carcl1.speedUS = 100;
// console.log(carcl1.speed)


// task 3
// class Car {
//     make;
//     speed;

//     constructor(m, s) {
//         this.make = m;
//         this.speed = s;
//     }

//     accelerate() {
//         this.speed += 10;
//         console.log(this.speed);
//     }
//     brake() {
//         this.speed -= 5;
//         console.log(this.speed);
//     }
// }

// class EV extends Car {
//     charge;

//     constructor(m, s, c){
//         super(m, s);
//         this.charge = c;
//     }

//     chargeBattery(chargeTo) {
//         this.charge = chargeTo;
//         console.log(this.charge)
//     }

//     accelerate() {
//         this.speed += 20;
//         this.charge -= 1;
//         console.log(`${this.make} going at ${this.speed} km/h, with a charge of ${this.charge}%`);
//     }
// }

// const ev1 = new EV("Tesla", 120, 23);

// ev1.accelerate();
// ev1.brake();
// ev1.chargeBattery(90);

// task 4
// class CarCl {
//     make;
//     speed;

//     constructor(m, s){
//         this.make = m;
//         this.speed = s;
//     }

//     get speedUS(){
//         return this.speed / 1.6;
//     }

//     set speedUS(speed_mih){
//         this.speed = speed_mih * 1.6;
//     }

//     accelerate() {
//         this.speed += 10;
//         console.log(this.speed);
//     }
//     brake() {
//         this.speed -= 5;
//         console.log(this.speed);
//     }
// }

// class EVC1 extends CarCl{
//     #charge;

//     constructor(m, s, c){
//         super(m, s);
//         this.#charge = c;
//     }

//     accelerate() {
//         super.accelerate();
//         this.#charge -= 1;
//         console.log(`${this.make} going at ${this.speed} km/h, with a charge of ${this.#charge}%`);
//     }
//     brake() {
//         super.brake();
//         this.speed -= 10;
//     }
//     chargeBattery(chargeTo) {
//         this.#charge = chargeTo;
//         console.log(this.#charge)
//     }
// }

// const evc1 = new EVC1("Rivian ", 120, 23);

// evc1.accelerate();
// evc1.brake();
// evc1.chargeBattery(90);


// PART 2
// Task 1
const game = {
    team1: 'Bayern Munich', 
    team2: 'Borussia Dortmund',
    players: [
    [
    'Neuer',
    'Pavar',
    'Martinez', 
    'Alaba',
    'Davies ',
    'Kimmich', 
    'Goretzka', 
    'Coman',
    'Muller',
    'Gnarby',
    'Lewandozski',
      ], 
      [
    'Burki',
    'Schulz',
    'Hummels', 
    'Akanji',
    'Hakimi',
    'Weigl',
    'Witsel',
    'Hazard',
    'Brandt',
    'Sancho',
    'Gotze',
    ],
    ],
    score: '4:0',
    scored: ['Lewandowski', 'Gnarby', 'Lewandowski', 'Hummels'],
    date: 'Nov 9th, 2037', odds: {
    team1: 1.33,
    x: 3.25,
    team2: 6.5,
    },
    };
    
// let players1 = game['players'][0];
// let players2 = game['players'][1];

// let qk1 = players1[0];
// let qk2 = players2[0];

// let fieldPlayers1 = Array.prototype.concat(players1);
// fieldPlayers1.shift();

// let fieldPlayers2 = Array.prototype.concat(players2);
// fieldPlayers2.shift();

// let allPlayers = players1.concat(players2)

// let players1Final = players1.concat(["Thiago", "Coutinho", "Perisic"]);

// const team1 = game.odds.team1;
// const draw = game.odds.x;
// const team2 = game.odds.team2;

// function printGoals(...players){
//     const goals = players.length;
//     for (let player of players){
//         console.log(player + " " + goals);
//     }
// }
// printGoals('Davies', 'Muller', 'Lewandowski', 'Kimmich');
// printGoals('Lewandowski', 'Gnarby', 'Lewandowski', 'Hummels');

// console.log(
//     (team1 < team2 && team1 < draw && `${game.team1} is more likely to win`) ||
//     (team2 < team1 && team2 < draw && `${game.team2} is more likely to win`) ||
//     (draw < team1 && draw < team2 && 'It is likely to be a draw')
// );

// Task 2
// for (let i = 1; i < game.scored.length + 1; i++){
//     console.log(`Goal ${i}: ${game.scored[i - 1]}`);
// }

// let avg = ( game.odds.team1 + game.odds.x + game.odds.team2) / 2;

// console.log(avg);

// console.log(`Odd of victory Bayern Munich: ${game.odds.team1}. Odd of draw: ${game.odds.x}. Odd of victory Borussia Dortmund: ${game.odds.team2}`);

// const scorers = [];

// game.scored.forEach(player => {
//     scorers[player] = (scorers[player] || 0) + 1;
//   });
  
// console.log(scorers);

// Task 3
const gameEvents = new Map([ [17, '⚽ GOAL'],
[36, '🔁 Substitution'],
[47, '⚽ GOAL'],
[61, '🔁 Substitution'], [64, '🔶 Yellow card'], [69, '🔴   Red card'], [70, '🔁 Substitution'],
[72, '🔁 Substitution'],
[76, '⚽ GOAL'],
[80, '⚽ GOAL'],
[92, '🔶 Yellow card'],
]);

let events = [... new Set([...gameEvents.values()])];
console.log(events)

gameEvents.delete(64)
console.log(gameEvents)

let avg = ([...gameEvents.keys()][[...gameEvents.keys()].length - 1] / [...gameEvents.values()].length).toFixed(0);

console.log(avg)

for (let [minute, event] of gameEvents){
    const half = minute <= 45 ? 'FIRST HALF' : 'SECOND HALF';
    console.log(`[${half}] ${minute} : ${event}`)
}






