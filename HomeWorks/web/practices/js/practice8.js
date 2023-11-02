
// Task 1
// function describeCountry(country, population, capitalCity) {
//     document.write(`${country} has ${population} milion people and its capital city is ${capitalCity}<br>`);
// }


// describeCountry("Kazakhstan", 19, "Astana");
// describeCountry("USA", 310, "Washington");
// describeCountry("China", 1441, "Beijing");

// Task 2
// function percentageOfWorld1(population){
//     document.write(`${~~((population/7900) * 100)}% of the world population<br>`);
// }

// percentageOfWorld1(1443);
// percentageOfWorld1(443);
// percentageOfWorld1(2343);

// const percentageOfWorld2 = function(population) {
//     document.write(`${~~((population/7900) * 100)}% of the world population<br>`)
// }

// percentageOfWorld2(1443);
// percentageOfWorld2(443);
// percentageOfWorld2(2343);

// Task 3
// let population = prompt();

// const percentageOfWorld3 = (population) => document.write(`${~~((population/7900) * 100)}% of the world population`);

// percentageOfWorld3(population);

// Task 4
// function percentageOfWorld1(population){
//     return (~~((population/7900) * 100));
// }

// function describePopulation(country, population) {
//     document.write(`${country} has ${population} milion people, which about ${percentageOfWorld1(population)}% of the world<br>`);
// }


// describePopulation("China", 1441)
// describePopulation("India", 1454)
// describePopulation("USA", 310)

// Task 5
// function days_of_a_year(year) {
//     if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0){
//         return "366"
//     }
//     else{
//         return "365"
//     }
// }

// document.write(days_of_a_year(2021))
// document.write(days_of_a_year(2024))

// Task 6
// function calcAverage(firstScore, secondScore, thirdScore){
//     return (~~((firstScore + secondScore + thirdScore) / 3));
// }

// let yesyl_avg_score1 = calcAverage(44, 23, 71);
// let yertys_avg_score1 = calcAverage(65, 54, 49);
// let yesyl_avg_score2 = calcAverage(85, 54, 41);
// let yertys_avg_score2 = calcAverage(23, 34, 27);

// function checkWinner(avgYesyl, avgYertys){
//     if (avgYesyl > avgYertys * 2){
//         document.write(`Yesyl win (${avgYesyl} and ${avgYertys})<br>`)
//     }
//     else if (avgYesyl * 2 < avgYertys){
//         document.write(`Yertys win (${avgYesyl} and ${avgYertys})<br>`)
//     }
//     else{
//         document.write("No one win<br>")
//     }
// }

// checkWinner(yesyl_avg_score1, yertys_avg_score1);
// checkWinner(yesyl_avg_score2, yertys_avg_score2);
