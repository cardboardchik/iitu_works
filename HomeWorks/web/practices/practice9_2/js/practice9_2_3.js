// task 3
let bills = [22, 295, 176, 440, 37, 105, 10, 1100, 86, 52];
let tips = [];
let totals = [];

function calcTip(bill) {
    if (50 <= bill && bill <= 300){
        return bill * 0.15;
    }
    return bill * 0.2;
}

for (let i = 0; i < bills.length; i++){
    tips.push(calcTip(bills[i]));

    totals.push(bills[i] + tips[i]);
}

document.write(tips + "<br>" + totals+ "<br>");

// avg
function calcAverage (arr){
    let sum = 0;

    for (let i = 0; i < arr.length; i++){
        sum += arr[i];
    }

    return (sum / arr.length).toFixed(1)
}

document.write(calcAverage(totals))