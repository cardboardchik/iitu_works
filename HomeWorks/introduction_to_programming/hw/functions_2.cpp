#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// 1
vector <int> dec_to_bin (int a){
    vector <int> ans;

    while (a != 0){
        ans.push_back(a % 2);
        a /= 2;
    }

    return ans;

}
// 2
int nok (int a, int b){
    int ans;

    ans = a * b;

    while (b != 0){
        int c = b;

        b = a % b;
        a = c;
    }

    ans /= a;

    return ans;
}

// 3
vector <int> happy_nums_4 (){
    
}
int main (){
    //mid level
    // 1
    /*int a;
    vector <int> ans;
    cin >> a;

    ans = dec_to_bin(a);

    for (int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i];
    }
    */
    // 2
    /*
    int a, b;

    cin >> a;
    cin >> b;

    cout << nok(a,b);
    */

    // 3


    return 0;
}