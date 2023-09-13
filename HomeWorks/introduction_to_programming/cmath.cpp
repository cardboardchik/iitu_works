#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int i;
    int n = 2;
    bool is_prime = true;

    cin >> i;

    while (n <= sqrt(i)){
        if ((i % n) == 0){
            is_prime = false;
        }
        n++;
    }

    cout << is_prime;


    return 0;
}