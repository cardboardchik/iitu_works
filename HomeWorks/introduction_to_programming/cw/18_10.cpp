#include <iostream>
#include <cmath>

using namespace std;

int sum1 (int n, int a = 1){
    
    if (a < n){
        cout << a << " ";
        sum1(n, a + 1);
    }
    else{
        return a;
    }
}
// 1 + 3x, 1 + 5x

void fil (int n, int a = 1){

    if (a <= n){
        if (a % 3 == 1 || a % 5 == 1){
            cout << a << "-yes" << " ";
        }
        else{
            cout << a << "-no" << " ";
        }
        fil(n, a + 1);
    }
    else{
        return;
    }
}

int n_power (int a, int n){
    if (n > 0){
        return n_power(a*a, n - 1);
    }
    else{
        return a;
    }
}

int main(){

    cout << n_power(10, 1);

    return 0;
}