#include <iostream>

using namespace std;

int main(){
    //mid level, odd ex
    // 1
    /*const int size = 10;
    int arr_1[size], arr_2[size];
    int arr_ans[size];
    
    for (int i = 0; i < size; i++){
        cin >> arr_1[i];
    }

    for (int i = 0; i < size; i++){
        cin >> arr_2[i];
    }

    for (int i = 0; i < size; i++){
        if (i % 2 == 0){
            arr_ans[i] = arr_1[i + 1];
        }
        else if (i % 2 != 0){
            arr_ans[i] = arr_2[i - 1];
        }
    }

    for (int i = 0; i < size; i++){
        cout << arr_ans[i] << " ";
    }
    */

    // 3
    /*const int size = 17;
    int arr[size];
    int answer = 0;

    for (int i = 0; i < size; i++){
        cin >> arr[i];

        answer += arr[i] / 10;
        answer += arr[i] % 10;
    }

    cout << answer;
    */

    // 5
    /*const int size = 10;
    int X[size], Y[size];
    int S[size], c = 0;

    for (int i = 0; i < size; i++){
        cin >> X[i];
    }

    for (int i = 0; i < size; i++){
        cin >> Y[i];
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (X[i] == Y[j]){
                S[c++] = X[i];
            }
        }
    }

    for (int i = 0; i < c; i++){
        cout << S[i] << " ";
    }
    */

    // 7
    /*const int size = 16;
    double Z[size];
    double sum_1 = 0;
    double sum_2 = 0;


    for (int i = 0; i < size; i++){
        cin >> Z[i];
    }
    
    for (int i = 0; i < size; i += 2){
        sum_1 += Z[i];
    }
    for (int i = 0; i < size; i += 3){
        sum_1 += Z[i];
    }

    cout << sum_1 - sum_2;
    */

    // 9
    return 0;
}