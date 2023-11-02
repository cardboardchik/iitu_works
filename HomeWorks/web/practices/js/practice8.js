
// Task 1
// function describeCountry(country, population, capitalCity) {
//     document.write(`${country} has ${population} people and its capital city is ${capitalCity}`);
// }

// let country = prompt();
// let population = prompt();
// let capital = prompt();

// describeCountry(country, population, capital);

// Task 2
// function percentageOfWorld1(population){
//     document.write(`${~~((population/7900) * 100)}% of the world population`);
// }

// let population = prompt();

// percentageOfWorld1(population);

// const percentageOfWorld2 = function(population) {
//     return ((population/7900) * 100)
// }

// let population1 = prompt();

// percentageOfWorld2(population1);


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
function calcAverage(firstScore, secondScore, thirdScore){
    return (~~((firstScore + secondScore + thirdScore) / 3));
}

let yesyl_avg_score = calcAverage(44, 23, 71);
let yertys_avg_score = calcAverage(65, 54, 49);

function checkWinner(avgYesyl, avgYertys){
    if (avgYesyl > avgYertys){
        document.write(`Yesyl win (${avgYesyl} and ${avgYertys})`)
    }
    else{
        document.write(`Yertys win (${avgYesyl} and ${avgYertys})`)
    }
}

checkWinner(yesyl_avg_score, yertys_avg_score);
