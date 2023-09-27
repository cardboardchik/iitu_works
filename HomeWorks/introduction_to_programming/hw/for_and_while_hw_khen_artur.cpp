#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // for 1
    /*int K, N;

    cin >> K;
    cin >> N;

    for (; N > 0; N--){
        cout << K << endl;
    }
    */

    // for 2
    /*int A, B;
    int N;

    cin >> A;
    cin >> B;

    for (; A <= B; A++){
        N += A;
        cout << A << endl;
    }
    cout << N;
    */

    // for 3
    /*int A, B;
    int N;

    cin >> A;
    cin >> B;

    for (; A <= B; B--){
        N += B;
        cout << B << endl;
    }
    cout << N;
    */

    // for 4
    /*int price;

    cin >> price;

    for (int kg = 1; kg <= 10; kg++){
        cout << price * kg << endl;
    }
    */

    // for 5
    /*int price;

    cin >> price;

    for (double kg = 0.1; kg <= 1; kg += 0.1){
        cout << price *  << endl;
    }
    */

    // for 6
    /*int price;

    cin >> price;

    for (double kg = 1.2; kg <= 2; kg += 0.2){
        cout << price * kg << endl;
    }
    */

    // for 7
    /*int A, B;
    int answer;

    cin >> A;
    cin >> B;

    for (; A <= B; B--){
        answer += B;
    }

    cout << answer << endl;
    */


    // for 8
    /*int A, B;
    int answer;

    cin >> A;
    cin >> B;

    for (; A <= B; B--){
        answer *= B;
    }

    cout << answer << endl;
    */

    // for 9
    /*int A, B;
    int answer;

    cin >> A;
    cin >> B;

    for (; A <= B; B--){
        answer += B * B;
    }

    cout << answer << endl;
    */


    // for 10
    /*double N;
    double answer;

    cin >> N;

    for (; N > 0; N--){
        answer += 1/N;
    }

    cout << answer;
    */

    // for 11
    /*int N;
    int answer;

    cin >> N;

    for (int i = N; i >= 0; i--){
        answer += (i + N) * (i + N);
    }

    cout << answer;
    */

    // for 12
    /*int N;
    float answer = 1;

    cin >> N;

    for (float i = 1.1; N > 0; N--, i += 0.1){
        answer *= i;
    }

    cout << answer;
    */

    // for 13
    /*int N;
    int j = 0;
    float answer = 0;

    cin >> N;

    for (float i = 1.1; j < N; j++, i += 0.1){
        answer += pow(-1, j)*i;
    }

    cout << answer;
    */

    // for 14
    /*int N;
    int answer;

    cin >> N;

    for (; N > 0; N--){
        answer += 2 * N - 1;
    }

    cout << answer;
    */

    // for 15
    int A, N;
    int answer = 1;

    cin >> A;
    cin >> N;

    for (; N > 0; N--){
        answer *= A;
    }

    cout << answer;
    return 0;
}