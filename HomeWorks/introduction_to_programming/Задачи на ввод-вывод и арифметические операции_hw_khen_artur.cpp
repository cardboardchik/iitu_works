// ex from https://informatics.msk.ru/mod/statements/view.php?id=2296#1

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // A Задача №2936. Гипотенуза
    /*int a, b;
    float c;

    cin >> a;
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << c;
    */

    // B Задача №2937. Следующее и предыдущее
    /*int i;

    cin >> i;

    cout << "The next number for the number " << i << " is " << i + 1 << "." << endl;
    cout << "The previous number for the number " << i << " is " << i - 1 << ".";
    */

    // C Задача №2938. Дележ яблок - 1
    /*int N, K;
    int answer;

    cin >> N;
    cin >> K;

    answer = K / N;

    cout << answer;
    */

    // D Задача №2939. Дележ яблок - 2
    /*int N, K;
    int answer;

    cin >> N;
    cin >> K;

    answer = K % N;

    cout << answer;
    */

    // E Задача №2940. МКАД 
    int v, t;
    int answer;

    cin >> v;
    cin >> t;

    if (v > 0){
        answer = (v * t) % 109;
    }
    else if (v < 0){
        answer = abs(((abs(v) * t) % 109) - 109);
    }
    else{
        answer = 0;
    }

    cout << answer;
    return 0;
}