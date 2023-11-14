// task 1
function calcTip(bill) {
    if (50 <= bill && bill <= 300){
        return bill * 0.15;
    }
    return bill * 0.2;
}

let bills = [125, 555, 44];
let tips = [];
let total = [];

for (let i = 0; i < bills.length; i++){
    tips.push(calcTip(bills[i]));

    total.push(bills[i] + tips[i]);
}

document.write(tips + "<br>")
document.write(total)
