#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int rows = 3;
    const int coulms = 4;

    int matrix[rows][coulms];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coulms; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < coulms; i++){
        for (int j = 0; j < coulms - 1; j++){
            if (matrix[2][j] > matrix[2][j + 1]){
                int a = matrix[2][j + 1];
                matrix[2][j + 1] = matrix[2][j];
                matrix[2][j] = a;
            }
            
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coulms; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}