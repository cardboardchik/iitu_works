const firstButton = document.querySelector('#ShowModal_1');
const secondButton = document.querySelector('#ShowModal_2');
const thirdButton = document.querySelector('#ShowModal_3');

const firstButtonClose = document.querySelector('#CloseModal_1');
const secondButtonClose = document.querySelector('#CloseModal_2');
const thirdButtonClose = document.querySelector('#CloseModal_3');

const modalOne = document.querySelector('#modal');
const modalTwo = document.querySelector('#modal2');
const modalThree = document.querySelector('#modal3');


const dialog = document.querySelectorAll('dialog')



firstButton.addEventListener('click', () => {
    modalOne.showModal()
})
firstButtonClose.addEventListener('click', () => {
    modalOne.close();
})


secondButton.addEventListener('click', () => {
    modalTwo.showModal();
})
secondButtonClose.addEventListener('click', () => {
    modalTwo.close();
})


thirdButton.addEventListener('click', () => {
    modalThree.showModal();
})
thirdButtonClose.addEventListener('click', () => {
    modalThree.close();
})


document.addEventListener ('click', (event) => {
    console.log(event.target)
    dialog.forEach((dial, i) => {
        if (event.target == dial)
            dial.close()
    })  
})