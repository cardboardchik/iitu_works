// task 2
const arman = {
    fullName: "Arman Halykov",
    weight: 78,
    height: 1.69,

    calcBMI: function() {
        this.BMI = (this.weight / this.height ** 2).toFixed(1);
        return this.BMI;
    }
}

const kuat = {
    fullName: "Kuat Mamyrkhanuly",
    weight: 92,
    height: 1.95,

    calcBMI: function() {
        this.BMI = (this.weight / this.height ** 2).toFixed(1);
        return this.BMI;
    }
}

arman.calcBMI();
kuat.calcBMI();


if (arman.BMI > kuat.BMI) {
    document.write(`${arman.fullName}'s BMI (${arman.BMI}) is higher than ${kuat.fullName}'s (${kuat.BMI})!`);
} else if (kuat.bmi > arman.bmi) {
    document.write(`${kuat.fullName}'s BMI (${kuat.BMI}) is higher than ${arman.fullName}'s (${arman.BMI})!`);
} else {
    document.write(`${arman.fullName} and ${kuat.fullName} have the same BMI (${arman.BMI})!`);
}
