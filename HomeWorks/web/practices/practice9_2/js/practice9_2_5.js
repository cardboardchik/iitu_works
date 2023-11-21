function checkDogs(dogsAliya, dogsSaule) {
    let aliyaCopy = dogsAliya.slice(1, 3);

    let allDogs = Array.prototype.concat(aliyaCopy, dogsSaule);

    for (let i = 0; i < allDogs.length; i++){
        let dog_type = allDogs[i] >= 3 ? 'adult' : "puppy";

        document.write(`Dog number ${i + 1} is an ${dog_type}, and is ${allDogs[i]} years old<br>`);
    }
}

let aliyaData1 = [3, 5, 2, 12, 7];
let sauleData1 = [4, 1, 15, 8, 3];
checkDogs(aliyaData1, sauleData1);

let aliyaData2 = [9, 16, 6, 8, 3];
let sauleData2 = [10, 5, 6, 1, 4];
checkDogs(aliyaData2, sauleData2);