#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// void dec_to_bin(int a){
//     vector <int> bin;

//     bin.push_back(0);
//     while (a > 0)
//     {
//         bin.push_back(a % 2);
//         a /= 2;
//     }
    
//     for (int i = bin.size() - 1; i > 0; i--){
//         cout << bin[i];
//     }
    
// }

// void happy_num_four(int a){
//     if (((a / 1000) + ((a / 100)) % 10) == (a % 10) + ((a % 100) / 10)){
//         cout << "Happy";
//     }
//     else{
//         cout << "Not Happy";
//     }

// }

// void happy_num_six(int a){
//     if (((a / 100000) + ((a / 10000) % 10) + ((a / 1000) % 10) == (a % 10) + ((a % 100) / 10) + ((a % 1000) / 100))){
//         cout << "Happy";
//     }
//     else{
//         cout << "Not Happy";
//     }

// }

void bin_to_dec(int a){
    int ans = 0;
    int b = 0;
    int c = 1;
    while (true){
        if (a / c == 0){
            break;
        }
        b++;
        c *= 10;
    }
    c = 1;
    for (int i = 1, j = 0; i <= b; i++, j++){
        int p = pow(10, i);
        if ((a % p) >= 1){
            ans += pow(2, j);
            a -= c;
        }
        c *= 10;
        
    }

    cout << ans;
    
}

int main(){
    int a;

    cin >> a;

    bin_to_dec(a);
    return 0;
}