#include <iostream>
//#include <cmath>

using namespace std;

int main(){
    // if2
    /*
    int i;

    cin >> i;
    if (i > 0){
        i++;
    }
    else{
        i -= 2;
    }
    cout << i;
    */


    // if3
    
    /*int i;
    cin >> i;
    if (i > 0) {
        i++;
    }
    else if (i < 0) {
        i -= 2;
    }
    else {
        i = 10;
    }

    cout << i;
    */


    // if4
    /*int first_int, second_int, third_int;
    int answer = 0;

    cin >> first_int;
    cin >> second_int;
    cin >> third_int;

    if (first_int > 0) {
        answer++;
    }
    if (second_int > 0) {
        answer++;
    }
    if (third_int > 0) {
        answer++;
    }

    cout << answer;
    */


    // if5
    /*
    int first_int, second_int, third_int;
    int p_nums = 0;
    int n_nums = 0;

    cin >> first_int;
    cin >> second_int;
    cin >> third_int;

    if (first_int > 0) {
        p_nums++;
    }
    else if (first_int < 0){
        n_nums++;
    }
    if (second_int > 0) {
        p_nums++;
    }
    else if (second_int < 0){
        n_nums++;
    }
    if (third_int > 0) {
        p_nums++;
    }
    else if (third_int < 0){
        n_nums++;
    }

    cout << p_nums << endl << n_nums;
    */


    // if6
    int first_num, second_num;

    cin >> first_num;
    cin >> second_num;

    if (first_num > second_num) {
        cout << first_num;
    }
    else if (first_num < second_num) {
        cout << second_num;
    }
    else {
        cout << "They are equal";
    }
    return 0;
}