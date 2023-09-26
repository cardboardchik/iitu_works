#include <iostream>
#include <cmath>
using namespace std;

int factorial (int x);

int main(){

int X, N;
double answer = 0;
int fact = 1;
cin >> X;
cin >> N;

for (int i = 1; i <= N; i++){
    fact *= i;
    answer += pow(X, i) / fact;
    
}

cout << answer;
return 0;
}

int factorial (int x){
    if (x > 0){
        return x * factorial(x - 1);
    }
    else{
        return 1;
    }
}