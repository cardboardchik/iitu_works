// if 26
// var x = prompt();

// if (x <= 0){
//     x = -x;
// }
// else if (x > 0 && x < 2){
//     x = x * x;
// }
// else{
//     x = 4;
// }

// document.write(x)

// if 27
// var x = prompt();

// if (x < 0){
//     x = 0;
// }
// else if (x % 2 == 0){
//     x = 1;
// }
// else{
//     x = -1;
// }

// document.write(x)

// if 28
// var x = prompt();

// if (x % 4 == 0 && x % 100 != 0 && x % 400 == 0){
//     document.write(x, " високосный");
// }
// else{
//     document.write(x, " не високосный");
// }

// if 29
// var x = prompt();

// if (x < 0 && x % 2 == 0){
//     document.write("отрицательное четное число");
// }
// else if (x > 0 && x % 2 == 0){
//     document.write("положительное четное число");
// }
// else if (x < 0 && x % 2 != 0){
//     document.write("отрицательное нечетное число");
// }
// else if (x > 0 && x % 2 != 0){
//     document.write("положительное нечетное число");
// }
// else{
//     document.write("нулевое число");
// }

// if 30
// var x = prompt();

// if (~~(x / 100) != 0 && x % 2 == 0){
//     document.write("трехзначное четное число");
// }
// else if(~~(x / 100) != 0 && x % 2 != 0){
//     document.write("трехзначное нечетное число");
// }
// else if(~~(x / 10) != 0 && x % 2 == 0){
//     document.write("двухзначное четное число");
// }
// else if(~~(x / 10) != 0 && x % 2 != 0){
//     document.write("двухзначное нечетное число");
// }
// else if(x % 2 == 0){
//     document.write("однозначное четное число");
// }
// else if(x % 2 != 0){
//     document.write("однозначное нечетное число");
// }

// case 16
// let x = prompt();

// switch (~~(x / 10)) {
//     case 2:
//         document.write("Двадцать");
//         break;
//     case 3:
//         document.write("Тридцать");
//         break;
//     case 4:
//         document.write("Сорок");
//         break;
//     case 5:
//         document.write("Пятьдесят");
//         break;
//     case 6:
//         document.write("Шестьдесят");
//         break;
// }

// switch (x % 10) {
//     case 0:
//         document.write(" лет");
//         break;
//     case 1:
//         document.write(" один год");
//         break;
//     case 2:
//         document.write(" два года");
//         break;
//     case 3:
//         document.write(" три года");
//         break;
//     case 4:
//         document.write(" четыре года");
//         break;
//     case 5:
//         document.write(" пять лет");
//         break;
//     case 6:
//         document.write(" шесть лет");
//         break;
//     case 7:
//         document.write(" семь лет");
//         break;
//     case 8:
//         document.write(" восемь лет");
//         break;
//     case 9:
//         document.write(" девять лет");
//         break;  
// }

// case 17

// let x = prompt();
// let ii = "учебных заданий"

//     switch (parseInt(x)) {
//         case 11:
//             document.write("Одинадцать " + ii);
//             break;
//         case 12:
//             document.write("Двенадцать " + ii);
//             break;
//         case 13:
//             document.write("Тринадцать " + ii);
//             break;
//         case 14:
//             document.write("Четырнадцать " + ii);
//             break;
//         case 15:
//             document.write("Пятнадцать " + ii);
//             break;
//         case 16:
//             document.write("Шестнадцать " + ii);
//             break;
//         case 17:
//             document.write("Семнадцать " + ii);
//             break;
//         case 18:
//             document.write("Восемнадцать " + ii);
//             break;
//         case 19:
//             document.write("Девятнадцать " + ii);
//             break;
        
//         default:
//             switch (~~(x / 10)) {
//                 case 2:
//                     document.write("Двадцать");
//                     break;
//                 case 3:
//                     document.write("Тридцать");
//                     break;
//                 case 4:
//                     document.write("Сорок");
//                     break;
        
//             }
        
//             switch (x % 10) {
//                 case 0:
//                     document.write(" учебных заданий");
//                     break;
//                 case 1:
//                     document.write(" одно ");
//                     break;
//                 case 2:
//                     document.write(" два ");
//                     break;
//                 case 3:
//                     document.write(" три ");
//                     break;
//                 case 4:
//                     document.write(" четыре ");
//                     break;
//                 case 5:
//                     document.write(" пять ");
//                     break;
//                 case 6:
//                     document.write(" шесть ");
//                     break;
//                 case 7:
//                     document.write(" семь ");
//                     break;
//                 case 8:
//                     document.write(" восемь ");
//                     break;
//                 case 9:
//                     document.write(" девять ");
//                     break;  
//             }

//             switch (x % 10) {
//                 case 5:
//                 case 6:
//                 case 7:
//                 case 8:
//                 case 9:
//                     document.write(ii);
//                     break;
//                 case 1:
//                     document.write("учебное задание");
//                     break;
//                 case 2:
//                 case 3:
//                 case 4:
//                     document.write("учебных задания");
//                     break;
//             }
//     }


// case 18
// let x = prompt();

// let description = "";

// switch (~~(x / 100)) {
//     case 1:
//         description += "сто ";
//         break;
//     case 2:
//         description += "двести ";
//         break;
//     case 3:
//         description += "триста ";
//         break;
//     case 4:
//         description += "четыреста ";
//         break;
//     case 5:
//         description += "пятьсот ";
//         break;
//     case 6:
//         description += "шестьсот ";
//         break;
//     case 7:
//         description += "семьсот ";
//         break;
//     case 8:
//         description += "восемьсот ";
//         break;
//     case 9:
//         description += "девятьсот ";
//         break;
// }

// switch (x % 100){
//     case 10:
//         description += "десять";
//         break;
//     case 11:
//         description += "одиннадцать";
//         break;
//     case 12:
//         description += "двенадцать";
//         break;
//     case 13:
//         description += "тринадцать";
//         break;
//     case 14:
//         description += "четырнадцать";
//         break;
//     case 15:
//         description += "пятнадцать";
//         break;
//     case 16:
//         description += "шестнадцать";
//         break;
//     case 17:
//         description += "семнадцать";
//         break;
//     case 18:
//         description += "восемнадцать";
//         break;
//     case 19:
//         description += "девятнадцать";
//         break;
//     default:
//         switch (~~((x % 100) / 10)) {
//             case 2:
//                 description += "двадцать ";
//                 break;
//             case 3:
//                 description += "тридцать ";
//                 break;
//             case 4:
//                 description += "сорок ";
//                 break;
//             case 5:
//                 description += "пятьдесят ";
//                 break;
//             case 6:
//                 description += "шестьдесят ";
//                 break;
//             case 7:
//                 description += "семьдесят ";
//                 break;
//             case 8:
//                 description += "восемьдесят ";
//                 break;
//             case 9:
//                 description += "девяносто ";
//                 break;
//         }
        
//         switch (x % 10){
//             case 1:
//                 description += "один";
//                 break;
//             case 2:
//                 description += "два";
//                 break;
//             case 3:
//                 description += "три";
//                 break;
//             case 4:
//                 description += "четыре";
//                 break;
//             case 5:
//                 description += "пять";
//                 break;
//             case 6:
//                 description += "шесть";
//                 break;
//             case 7:
//                 description += "семь";
//                 break;
//             case 8:
//                 description += "восемь";
//                 break;
//             case 9:
//                 description += "девять";
//                 break;
//         }
// }

// document.write(description)

// case 19
// let year = prompt();

// const yearDiff = year - 1984;
// const num_year_in_cycle = yearDiff % 60;

// let color, animal;

// switch (~~(num_year_in_cycle / 12)) {
//     case 0:
//         color = "зеленой";
//         break;
//     case 1:
//         color = "красной";
//         break;
//     case 2:
//         color = "желтой";
//         break;
//     case 3:
//         color = "белой";
//         break;
//     case 4:
//         color = "черной";
//         break;
// }

// // Определение животного
// switch (num_year_in_cycle % 12) {
//     case 0:
//         animal = "крысы";
//         break;
//     case 1:
//         animal = "коровы";
//         break;
//     case 2:
//         animal = "тигра";
//         break;
//     case 3:
//         animal = "зайца";
//         break;
//     case 4:
//         animal = "дракона";
//         break;
//     case 5:
//         animal = "змеи";
//         break;
//     case 6:
//         animal = "лошади";
//         break;
//     case 7:
//         animal = "овцы";
//         break;
//     case 8:
//         animal = "обезьяны";
//         break;
//     case 9:
//         animal = "курицы";
//         break;
//     case 10:
//         animal = "собаки";
//         break;
//     case 11:
//         animal = "свиньи";
//         break;
// }

// document.write("год " + color + " " + animal);


// case 20
// let D = prompt();
// let M = prompt();

// let ans;

// switch (parseInt(M)) {
//     case 1:
//         if (D >= 20) {
//             ans = "Водолей";
//         } else {
//             ans = "Козерог";
//         }
//         break;
//     case 2:
//         if (D <= 18) {
//             ans = "Водолей";
//         } else {
//             ans = "Рыбы";
//         }
//         break;
//     case 3:
//         if (D <= 20) {
//             ans = "Рыбы";
//         } else {
//             ans = "Овен";
//         }
//         break;
//     case 4:
//         if (D <= 19) {
//             ans = "Овен";
//         } else {
//             ans = "Телец";
//         }
//         break;
//     case 5:
//         if (D <= 20) {
//             ans = "Телец";
//         } else {
//             ans = "Близнецы";
//         }
//         break;
//     case 6:
//         if (D <= 21) {
//             ans = "Близнецы";
//         } else {
//             ans = "Рак";
//         }
//         break;
//     case 7:
//         if (D <= 22) {
//             ans = "Рак";
//         } else {
//             ans = "Лев";
//         }
//         break;
//     case 8:
//         if (D <= 22) {
//             ans = "Лев";
//         } else {
//             ans = "Дева";
//         }
//         break;
//     case 9:
//         if (D <= 22) {
//             ans = "Дева";
//         } else {
//             ans = "Весы";
//         }
//         break;
//     case 10:
//         if (D <= 22) {
//             ans = "Весы";
//         } else {
//             ans = "Скорпион";
//         }
//         break;
//     case 11:
//         if (D <= 22) {
//             ans = "Скорпион";
//         } else {
//             ans = "Стрелец";
//         }
//         break;
//     case 12:
//         if (D <= 21) {
//             ans = "Стрелец";
//         } else {
//             ans = "Козерог";
//         }
//         break;
// }

// document.write(ans);


// for 36
// let N = prompt();
// let K = prompt();

// let ans = 0;

// for (let i = 1; i <= N; i++){
//     ans += i ** K;
// }

// document.write(ans);

// for 37
// let N = prompt();

// let ans = 0;

// for (let i = 1; i <= N; i++){
//     ans += i ** i;
// }

// document.write(ans);

// for 38
// let N = prompt();

// let ans = 0;

// for (let i = 0; i < N; i++){
//     ans += (i + 1) ** (N - i);
// }

// document.write(ans);

// for 39
// let A = prompt();
// let B = prompt();

// for (let i = parseInt(A); i <= parseInt(B); i++){
//     for (let j = 0; j < i; j++){
//         document.write(i + " ");
//     }
//     document.write("<br>");
// }

// for 40
// let A = prompt();
// let B = prompt();

// for (let i = parseInt(A), k = 0; i <= parseInt(B); i++, k++){
//         for (let j = 0; j <= k; j++){
//             document.write(i + " ");
//         }
//         document.write("<br>");
//     }


// while 26
// let N = prompt();

// let ans = 2;

// let F1 = 1, F2 = 1;

// while (F2 != parseInt(N)) {
//     let F3 = F2;
//     F2 = F1 + F2;
//     F1 = F3;

//     ans++;
// }

// document.write(F1 + " " + (F1 + F2));


// while 27
// let N = prompt();

// let ans = 2;

// let F1 = 1, F2 = 1;

// while (F2 != parseInt(N)) {
//     let F3 = F2;
//     F2 = F1 + F2;
//     F1 = F3;

//     ans++;
// }

// document.write(ans);

// while 28
// let E = prompt();

// let A1 = 2
// let A2 = 2 + (1 / A1);

// let K = 2;

// while (Math.abs(A2 - A1) >= E){
//     A1 = A2;
//     A2 = 2 + (1 / A1);
//     K++;
// }

// document.write(K + " " + A1 + " " + A2)

// while 29
// let E = prompt();

// let A1 = 1;
// let A2 = 2;


// let K = 2;

// while (Math.abs(A2 - A1) >= E){
//     let A = A2;
//     A2 = (A1 + 2 * A2) / 3;
//     A1 = A;
//     K++;
// }

// document.write(K + " " + A1 + " " + A2)

// while 30
// let A = prompt();
// let B = prompt();
// let C = prompt();

// let ans = 0;

// while (A - C >= 0){
//     A -= C;

//     let k = B;
//     while (k - C >= 0){
//         k -= C;
//         ans++;
//     }
// }

// document.write(ans);
