#include <iostream>
using namespace std;

int main(){

    // 1
    /*int arr[14];
    int answer = 0;

    for (int i = 0; i < 14; i++){
        cin >> arr[i];
        if ((arr[i] % 2) == 0){
            answer++;
        }
    }

    cout << answer;
    */

    // 2
    /*int arr[12];
    int sum = 0;

    for (int i = 0; i < 12; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    arr[4] = sum / 12;
    
    for (int i = 0; i < 12; i++){
        cout << arr[i] << " ";
    }
    */

    // 3
    /*int arr[11];
    double sum = 0;
    double mida;
    int answer = 0;

    for (int i = 0; i < 11; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    mida = sum / 11;
    
    for (int i = 0; i < 11; i++){
        if (arr[i] > mida){
            answer++;
        }
    }
    cout << answer;
    */


    // 4
    /*const int el = 10;
    int arr[el];

    int max_el_index = 0;


    for (int i = 0; i < el; i++){
        cin >> arr[i];
        
        if (arr[i] > arr[max_el_index]){
            max_el_index = i;
        }
    }

    int max_el = arr[max_el_index];

    arr[max_el_index] = arr[0];
    arr[0] = max_el;

    for (int i = 0; i < el; i++){
        cout << arr[i] << " ";
    }
    */


    // 5
    /*const int el = 9;
    int arr[el];

    int max_el_index = 0;
    int min_el_index = 0;


    for (int i = 0; i < el; i++){
        cin >> arr[i];
        
        if (arr[i] > arr[max_el_index]){
            max_el_index = i;
        }
        if (arr[i] < arr[min_el_index]){
            min_el_index = i;
        }
    }

    int max_el = arr[max_el_index];

    arr[max_el_index] = arr[min_el_index];
    arr[min_el_index] = max_el;

    for (int i = 0; i < el; i++){
        cout << arr[i] << " ";
    }
    */

    // 6
    /*const int el = 20;
    int arr[el];

    int even_n = 0;
    int odd_n = 0;

    for (int i = 0; i < el; i++){
        cin >> arr[i];
        
        if (arr[i] % 2 == 0){
            even_n++;
        }
        else if (arr[i] % 2 != 0){
            odd_n++;
        }
    }

    if (even_n > odd_n){
        cout << "even numbers > odd numbers";
    }
    else if (even_n < odd_n){
        cout << "even numbers < odd numbers";
    }
    else{
        cout << "even numbers < odd numbers";
    }
    */

    // 7
    /*const int el = 15;
    float arr[el];

    int answer = 0;

    for (int i = 0; i < el; i++){
        cin >> arr[i];

        if (arr[i] > arr[0]){
            answer++;
        }
    }
    cout << answer;
    */

    // 8
    /*const int el = 16;
    float arr[el];

    int max_el_index = 0;
    int min_el_index = 0;

    for (int i = 0; i < el; i++){
        cin >> arr[i];

        if (arr[i] > arr[max_el_index]){
            max_el_index = i;
        }
        if (arr[i] < arr[min_el_index]){
            min_el_index = i;
        }
    }

    cout << max_el_index << endl;
    cout << min_el_index;
    */

    // 9
    /*const int el = 15;
    int arr[el];
    float answer_arr[el];
    int sum = 0;
    double mida;


    for (int i = 0; i < el; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    mida = sum / (double) el;
    
    for (int i = 0; i < el; i++){
        answer_arr[i] = arr[i] - mida;

        cout << answer_arr[i] << " ";
    }
    */

    // 10
    /*const int el = 17;
    int arr[el];
    int sum = 0;
    int answer_sum = 0;
    int neg_n = 0;
    double mida;


    for (int i = 0; i < el; i++){
        cin >> arr[i];

        if (arr[i] < 0){
            sum += arr[i] * -1;
            neg_n++;
        }
    }
    mida = sum / (double) neg_n;
    
    for (int i = 0; i < el; i++){
        if (arr[i] > mida){
            answer_sum += arr[i];
        }
    }
    
    cout << answer_sum;
    */

    // 11
    /*const int el = 14;
    int arr[el];

    int evenCount = 0, evenSum = 0;

    for (int i = 0; i < el; i++){
        cin >> arr[i];

        if (arr[i] > 0){
            if ((arr[i]) % 2 == 0){
                evenCount++;
                evenSum += arr[i];
            }
        }
    }
    cout << evenCount << endl;
    cout << evenSum;
    */

    // 12
    /*const int el = 12;
    double arr[el];

    double answer_sum;

    for (int i = 0; i < el; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < el; i++){
        for (int j = 0; j < el - 1; j++){
            if (arr[j] < arr[j + 1]){
                double k = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = k;
            }
        }
    }

    answer_sum = arr[0] + arr[11];
    cout << answer_sum;
    */

    // 13
    /*const int el = 15;
    int arr[el];

    int max_el_index = 0;
    int min_el_index = 0;

    for (int i = 0; i < el; i++){
        cin >> arr[i];

        if (arr[i] > arr[max_el_index]){
            max_el_index = i;
        }
        if (arr[i] < arr[min_el_index]){
            min_el_index = i;
        }
    }

    cout << arr[max_el_index] + arr[min_el_index] << endl;
    cout << arr[max_el_index] - arr[min_el_index];
    */

    // 14
    /*const int el = 17;
    int arr[el];

    int neg_sum = 0;

    for (int i = 0; i < el; i++){
        cin >> arr[i];

        if (arr[i] % 2 != 0){
            neg_sum += arr[i];
        }
    }

    for (int i = 0; i < el; i++){
        if (arr[i] % 3 == 0){
            arr[i] = neg_sum;
        }

        cout << arr[i] << " ";
    }
    */

    // 15
    const int el = 14;
    double arr[el];

    for (int i = 0; i < el; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < 7; i++){
        // first part asc
        for (int j = 0; j < 6; j++){
            if (arr[j + 1] < arr[j]){
                double a = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = a;
            }
        }
        // second part desc
        for (int j = 7; j < 13; j++){
            if (arr[j + 1] > arr[j]){
                double a = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = a;
            }
        }
    }

    for (int i = 0; i < el; i++){
        cout << arr[i] << " ";
    }
    return 0;
}