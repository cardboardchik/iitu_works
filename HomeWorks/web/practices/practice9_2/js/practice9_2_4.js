const poll = {
    question: "What is your favourite programming language?",
    options: ["0: JavaScript", "1: Python", "2: Rust", "3: C++"],

    answers: new Array(4).fill(0),

    registerNewAnswer: function() {
        let list = ""
        for (let i = 0; i < this.options.length; i++){
            list += this.options[i] + `
`;
        }
        let index = prompt(`${this.question} 
${list}`)
        if (index >= 0 && index <=3){
            this.answers[index]++;

            this.displayResult(this.answers);
        }
        else{
            alert("INVALID")
        }
    },

    displayResult: function (type){
        if (type === undefined){
            type = prompt();
        }
        if (typeof type === 'string'){
            document.write("Poll results are " + type);
        }
        else{
            console.log(type)
        }
    }
}
// poll.registerNewAnswer();

// document.write(poll.answers)