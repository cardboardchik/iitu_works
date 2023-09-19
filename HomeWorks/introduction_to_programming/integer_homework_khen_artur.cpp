#include <iostream>
using namespace std;

int main(){
    // integer 1
    /*int L;
    int answer;

    cin >> L;

    answer = L / 100;

    cout << answer;
    */

   // integer 2
    /*int M;
    int answer;

    cin >> M;

    answer = M / 1000;

    cout << answer;
    */

   //integer 3
    /*int L;
    int answer;

    cin >> L;

    answer = L / 1024;

    cout << answer;
    */

   //integer 4
    /*int A;
    int B;
    int answer;

    cin >> A;
    cin >> B;

    answer = A / B;

    cout << answer;
    */

   //integer 5
    /*int A;
    int B;
    int answer;

    cin >> A;
    cin >> B;

    answer = A % B;

    cout << answer;
    */


    //integer 6
    /*int i;
    int tens;
    int ones;

    cin >> i;

    tens = i / 10;
    ones = i % 10;

    cout << tens;
    cout << ones;
    */


    //integer 7
    /*int i;
    int tens;
    int ones;
    int sum;

    cin >> i;

    tens = i / 10;
    ones = i % 10;

    sum = tens + ones;

    cout << sum;
    */


   //integer 8
    /*int i;
    int tens;
    int ones;
    int answer;

    cin >> i;

    tens = i / 10;
    ones = i % 10;

    answer = (ones * 10) + (tens);

    cout << answer; 
    */


   //integer 9
   /*int i;
   int answer;

    cin >> i;

    answer = i / 100;

    cout << answer;
    */


    //integer 10
    /*int i;
    int ones;
    int tens;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;

    cout << ones;
    cout << tens;
    */


    //integer 11
    /*int i;
    int ones;
    int tens;
    int hundreds;
    int answer;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;
    hundreds = i / 100;

    answer = hundreds + tens + ones;
    
    cout << answer;
    */


    //integer 12
    /*int i;
    int ones;
    int tens;
    int hundreds;
    int answer;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;
    hundreds = i / 100;

    answer = (ones * 100) + (tens * 10) + hundreds;

    cout << answer;
    */


   //integer 13
    /*int i;
    int ones;
    int tens;
    int hundreds;
    int answer;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;
    hundreds = i / 100;

    answer = (tens * 100) + (ones * 10) + hundreds;

    cout << answer;
    */


    //integer 14
    /*int i;
    int ones;
    int tens;
    int hundreds;
    int answer;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;
    hundreds = i / 100;

    answer = (tens) + (ones * 100) + (hundreds * 10);

    cout << answer;
    */


   //integer 15
    /*int i;
    int ones;
    int tens;
    int hundreds;
    int answer;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;
    hundreds = i / 100;

    answer = (tens * 100) + (ones) + (hundreds * 10);

    cout << answer;
    */


    //integer 16
    /*int i;
    int ones;
    int tens;
    int hundreds;
    int answer;
    
    cin >> i;

    ones = (i % 100) % 10;
    tens = (i % 100) / 10;
    hundreds = i / 100;

    answer = (tens) + (ones * 10) + (hundreds * 100);

    cout << answer;
    */


    // integer 17
    /*int i;
    int answer;

    cin >> i;

    answer = (i / 100) % 10;

    cout << answer;
    */


    // integer 18
    /*int i;
    int answer;

    cin >> i;

    answer = (i / 1000) % 10;

    cout << answer;
    */


    // integer 19
    /*int N;
    int minuts;

    cin >> N;

    minuts = N / 60;

    cout << minuts;
    */


    // integer 20
    /*int N;
    int hours;

    cin >> N;

    hours = (N / 60) / 60;

    cout << hours;
    */


    // integer 21
    /*int N;
    int sec;

    cin >> N;

    sec = N % 60;

    cout << sec;
    */


    // integer 22
    /*int N;
    int sec;

    cin >> N;

    sec = (N % 3600);

    cout << sec;
    */


    // integer 23
    /*int N;
    int minuts;

    cin >> N;

    minuts = (N % 3600) / 60;

    cout << minuts;
    
    */


    // integer 24
    /*int K;
    int answer;

    cin >> K;

    answer =  K % 7;

    cout << answer;
    */


    // integer 25
    /*int K;
    int answer;

    cin >> K;

    answer =  (K + 3) % 7;

    cout << answer;
    */


    // integer 26
    /*int K;
    int answer;

    cin >> K;

    answer =  (K % 7) + 1;
 
    cout << answer;
    */


    // integer 27
    /*int K;
    int answer;

    cin >> K;

    answer =  ((K + 4) % 7) + 1;
 
    cout << answer;
    */


    // integer 28
    /*int K;
    int N;
    int answer;

    cin >> K;
    cin >> N;

    answer =  ((K + (N - 2)) % 7) + 1;
 
    cout << answer;
    */


    // integer 29
    /*int A;
    int B;
    int C;
    int square_count;
    int free_space;

    cin >> A;
    cin >> B;
    cin >> C;

    square_count = (A * B) / (C * C);
    free_space = (A * B) - ((C * C) * square_count);

    cout << square_count << endl;
    cout << free_space << endl;
    */


    // integer 30
    int i;
    int answer;

    cin >> i;

    answer = ((i - 1)  / 100) + 1;

    cout << answer;

    return 0;
}

