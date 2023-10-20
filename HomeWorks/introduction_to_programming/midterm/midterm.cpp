#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    /*
    // 1
    double money;
    double procent;
    int answer = 1;

    cin >> money;
    cin >> procent;

    while (money < 10000){
        money = money * (procent / 100 + 1);
        answer++;
    }

    cout << answer;
    */

    // 2
    /*
    int n;
    int half;

    cin >> n;

    half = n / 2;

    int arr[n];


    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < half; i++){
        for (int j = 0; j < half - 1; j++){
            if (arr[j] < arr[j+1]){
                int a = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = a;
            }
            
        }
    }

    for (int i = half; i < n; i++){
        for (int j = half; j < n - 1; j++){
            if (arr[j] > arr[j+1]){
                int a = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = a;
            }
            
        }
    }

    
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    */

    // 3
    /*
    int m;
    int n;

    cin >> m;
    cin >> n;

    int arr[m][n];
    int ans = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < m; i++){
        int pre_ans = 0;
        for (int j = 0; j < n; j++){
            pre_ans += arr[i][j];
        }
        if (ans < pre_ans){
            ans = pre_ans;
        }
    }

    cout << ans;
    */

    // 4
    int n;

    cin >> n;

    int arr[n][n];
    int maxLocal[n - 2][n - 2];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < n - 1; i++){
        for (int j = 1; j < n - 1; j++){
            int max = arr[i][j];

            for (int k = (n / 2) - 3 + i; k < (n / 2) + i; k++){
                for (int g = (n / 2) - 3 + j; g < (n / 2) + j; g++){
                    if (arr[k][g] > max){
                        max = arr[k][g];
                    }
                }
            }

            maxLocal[i - 1][j - 1] = max;

        }
    }

    for (int i = 0; i < n - 2; i++){
        for (int j = 0; j < n - 2; j++){
            cout << maxLocal[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}