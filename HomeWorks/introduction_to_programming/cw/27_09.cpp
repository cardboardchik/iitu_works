#include <iostream>

using namespace std;

int main(){
    /*int score[5], max;

    cout << "enter 5 scores:\n";
    cin >> score[0];
    max = score[0];

    for (int i = 1; i < 5; i++){
        cin >> score[i];

        if (score[i] > max){
            max = score[i];
        }
    }

    cout << "Max: " << max << endl;

    for (int i = 0; i < 5; i++){
        cout << score[i] << " highest off by " << max - score[i] << endl;
    }
    */


    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n], sum, mul = 1;


    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            sum += arr[i];   
        }
        else if (arr[i] < 0){
            mul *= arr[i];
        }
    }

    cout << "sum: " << sum << endl;
    cout << "mul: " << mul;
}