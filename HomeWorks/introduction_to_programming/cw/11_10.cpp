#include <iostream>

using namespace std;

bool simple_n(int);

int main(){

    int a;

    cin >> a;

    cout << simple_n(a);

    return 0;
}

bool simple_n(int a){
    if (a % a == 0 && a != 1){
        return true;
    }
    return false;
}