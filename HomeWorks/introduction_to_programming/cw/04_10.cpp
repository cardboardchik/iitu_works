#include <iostream>
#include <vector>
using namespace std;

int main(){

    int row;
    int col;

    cin >> row;
    cin >> col;

    int arr[row][col];
    int vector[row];
    int product[row];
    int sum;

    for (int i = 0; i < row; i++){
        cin >> vector[i];
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < row; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++){
        sum = 0;
        for (int j = 0; j < row; j++){
            sum += arr[i][j] * vector[j];
        }
        product[i] = sum;
    }

    for (int i = 0; i < row; i++){
        cout << product[i] << endl;
    }


    return 0;
}