// Task 1
// function printForecast(arr) {
//     result = ""
//     for (let i = 1; i <= arr.length; i++){
//         result += `...${arr[i - 1]}ºC in ${i}days`
//     }
//     return result;
// }

// console.log(printForecast([17, 21, 23]))
// console.log(printForecast([12, 5, -5, 0, 4]))

// Task 2, 3
let secretNumber = ~~(Math.random() * 20 + 1);
let highScore = 0;
let score_now = 20;

function checkNumber(input_n) {
    document.body.style.backgroundColor = "#222";
    if (input_n == secretNumber){
        document.getElementById("f_num").innerHTML = secretNumber;
        document.getElementById("hint").innerHTML = 'Correct Number!';
        document.body.style.backgroundColor = "green";

        secretNumber = ~~(Math.random() * 20 + 1);

        document.getElementById('input_n').value = '';
        document.getElementById("f_num").innerHTML = "?";
        if (score_now > highScore){
            highScore = score_now;
            document.getElementById("high_score").innerHTML = `Highscore: ${highScore}`
        }

        score_now = 20;

        return true;
    }
    else if (input_n > secretNumber){
        document.getElementById("hint").innerHTML = 'Too high!';
    } 
    else if (input_n < secretNumber && input_n != ''){
        document.getElementById("hint").innerHTML = 'Too low!';
    }
    else {
        document.getElementById("hint").innerHTML = 'Enter the number!';
        score_now++;
    }
    document.getElementById('input_n').value = '';

    score_now--;

    document.getElementById("score_now").innerHTML = `Your Score: ${score_now}`
    if (score_now <= 0){
        document.getElementById("hint").innerHTML = 'Game Over!';
        document.body.style.backgroundColor = "red";
        score_now = 20;
    }

}

function again_clicked(){
    secretNumber = ~~(Math.random() * 20 + 1);
    highScore = 0;
    score_now = 20;
    document.getElementById("f_num").innerHTML = "?";
    document.getElementById("score_now").innerHTML = `Your Score: ${score_now}`;
    document.getElementById("high_score").innerHTML = `Highscore: ${highScore}`
    document.getElementById("hint").innerHTML = 'Start catching...';
    document.body.style.backgroundColor = "#222";
}