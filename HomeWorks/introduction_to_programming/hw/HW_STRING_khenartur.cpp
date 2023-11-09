#include <iostream>
#include <string>

using namespace std;

int main (){
    // E
    /*
    string s1;

    int res = 1;

    getline(cin, s1);

    for (int i = 0; i < s1.length(); i++){
        if (s1[i] == 32){
            res++;
        }
    }
    cout << res;
    */

   //F
    string s;

    string res_s;
    int res_n = 0;

    int start = 0;
    
    getline(cin, s);

    for (int i = 0; i < s.length(); i++){

        if (s[i] == 32){
            
        }
        res_n++;
    }

    return 0;
}