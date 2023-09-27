#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // for 26
    /*double X;
    int N;
    double answer = 0;

    cin >> X;
    cin >> N;

    for (int i = 1; i <= N; i++){
        answer += (pow(-1, i) * pow(X, (2 * i) + 1)) / ((2 * i) + 1);
    }
    cout << answer;
    */

    // for 25
    /*double X;
    int N;
    double answer = 0;

    cin >> X;
    cin >> N;

    for (int i = 1; i <= N; i++){
        answer += (pow(-1, i - 1) * pow(X, i)) / i;
    }
    cout << answer;
    */

    // for 27
    /*double X;
    int N;
    double answer = 0;

    cin >> X;
    cin >> N;



    for (int i = 0, j = 1, k = 1; i < N; i++, j *= (2 * i - 1), k *= (2 * i)){
        answer += (j * pow(X, (2 * i) + 1)) / (k * ((2 * i) + 1));
    }
    cout << answer;
    */

    // for 28
    /*double X;
    int N;
    double answer = 0;

    cin >> X;
    cin >> N;

    for (int i = 0, j = 1, k = 1; i < N; i++, j *= ((2 * i) - 3), k *= (2 * i)){
        answer += (pow(-1, i - 1) * j * pow(X, i)) / (k);
    }

    cout << abs(answer);
    */

    // for 29
    /*int N;
    double A, B;
    double H;

    cin >> N;
    cin >> A;
    cin >> B;

    H = (B - A) / N;

    cout << H << endl;

    for (int i = 0; i <= N; i++){
        cout << A + (i * H) << ", ";
    }
    */

    // for 30
    /*int N;
    double A, B;
    double H, X;


    cin >> N;
    cin >> A;
    cin >> B;

    H = (B - A) / N;

    cout << H << endl;

    for (int i = 0; i <= N; i++){
        X = A + (i * H);
        cout << 1 - sin(X) << ", ";
    }
    */

    // for 31
    /*int N;

    double A, ans;

    cin >> N;

    A = 2;
    for (int i = 1; i <= N; i++){
        ans = 2 + (1 / A);
        cout << ans << ", ";
        A = ans;
    }
    */


    // for 32
    /*int N;

    double A, ans;

    cin >> N;

    A = 1;
    for (int i = 1; i <= N; i++){
        ans = (A + 1) / i;
        cout << ans << ", ";
        A = ans;
    }
    */

    // for 33
    /*int N;

    int F_1 = 1, F_2 = 1, ans;

    cin >> N;

    cout << F_1 << ", " << F_2 << ", ";

    for (int i = 2; i < N; i++){
        ans = F_1 + F_2;
        cout << ans << ", ";
        F_1 = F_2;
        F_2 = ans;
    }
    */

    // for 34
    /*int N;

    double A_1 = 1, A_2 = 2, ans;

    cin >> N;

    cout << A_1 << ", " << A_2 << ", ";

    for (int i = 2; i < N; i++){
        ans = (A_1 + (2 * A_2)) / 3;
        cout << ans << ", ";
        A_1 = A_2;
        A_2 = ans;
    }
    */

    // for 35
    int N;

    int A_1 = 1, A_2 = 2, A_3 = 3, ans;

    cin >> N;

    cout << A_1 << ", " << A_2 << ", " << A_3 << ", ";

    for (int i = 3; i < N; i++){
        ans = A_3 + A_2 - (2 * A_1);
        cout << ans << ", ";
        A_1 = A_2;
        A_2 = A_3;
        A_3 = ans;
    }

    return 0;
}