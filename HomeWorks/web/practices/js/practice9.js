// task 1
// let populations = [1234, 123, 4321, 90];
// let percentages = [];

// if (populations.length == 4){
//     document.write(true + "<br>");
// }
// else{
//     document.write(false + "<br>");
// }

// function percentageOfWorld1(population){
//     return  ~~((population/7900) * 100);
// }

// for (let i = 0; i < populations.length; i++){
    // percentages.push(percentageOfWorld1(populations[i]));
// }


// task 2
// let neighbours = ["Canada", "Mexico"];

// let new_country = "Utopia";

// neighbours.push(new_country);

// neighbours.pop(new_country)

// if (!neighbours.includes("Germany")){
//     document.write("Probably not a central European country<br>")
// }

// let search_country =  "Mexico";
// let search_country_index = 0;

// for (let i = 0; i < neighbours.length; i++){
//     if (neighbours[i] == search_country){
//         search_country_index = i;
//         break;
//     }
// }

// neighbours[search_country_index] = "United Mexican States";

// document.write(neighbours)

// task 3
const myCountry = {
    conuntry: "Japan",
    capital: "Tokyo",
    language: "Japanese",
    population: 120000000,
    neighbours: [],

    describe: function(){
        document.write(`${this.conuntry} has ${this.population} ${this.language}-speaking people, ${this.neighbours.length} neighbouring countries and a capital called ${this.capital}`)
    },

    chekIsland: function() {
        this.isIsland = this.neighbours.length === 0 ? true : false;
    },

};

// task 4
// document.write(`${myCountry.conuntry} has ${myCountry.population} ${myCountry.language}-speaking people, ${myCountry.neighbours.length} neighbouring countries and a capital called ${myCountry.capital}`)

// myCountry.population += 2000000;

// myCountry['population'] += 2000000;


// task 5
// myCountry.chekIsland();
// document.write(myCountry.isIsland);


// task 6
// for (let i = 1; i <= 50; i++){
//     document.write(`Voter number ${i} is currently voting<br>`)
// }

// task 7
// function percentageOfWorld1(population){
//     return (~~((population/7900) * 100))
// }
// let populations = [1234, 123, 4321, 90];
// let percentages2 = []

// for (let i = 0; i < populations.length; i++){
//     percentages2.push(percentageOfWorld1(populations[i]));
// }

// task 8
// let listOfNeighbours = [['Canada', 'Mexico'], ['Spain'], ['Norway', 'Sweden', 'Kazakhstan']];


// for (let i = 0; i < listOfNeighbours.length; i++){
//     for (let j = 0; j < listOfNeighbours[i].length; j++){
//         let arr = listOfNeighbours[i].slice();
        
//         arr.splice(j, 1)
       
//         document.write(`For ${listOfNeighbours[i][j]} neighbour(s): ${arr}<br>`)
//     }
// }

// task 9
function percentageOfWorld1(population){
    return (~~((population/7900) * 100))
}

let populations = [1234, 123, 4321, 90];
let percentages3 = [];

let index = 0;
while (index < populations.length){
    percentages3.push(percentageOfWorld1(populations[index]));
    index++;
}

document.write(percentages3)
