#include <iostream>
#include <cstring>

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
   /*
    string s;

    int res_n = 0;

    int start = 0;
    
    getline(cin, s);
    
    int count = 0;

    for (int i = 0; i < s.length(); i++){

        if (s[i] == 32){
            if (res_n < count){
                
                

                res_n = count;

                start = i - count;
        
            }
            count = -1;
        }
        count++;
    }

    // res_s = res_s.at(start);

    cout << s.substr(start, res_n) << endl;

    cout << res_n;
    */

    // G
    /*
    string s;

    getline(cin, s);

    bool res = true;

    for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--){
        if (s[i] != s[j]){
            res = false;
            break;
        }
    }

    if (res){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    */

    // H
    /*
    string s;

    getline(cin, s);

    char res;

    for (int i = 0; i < s.size(); i++){
        for (int j = 0; j < s.size(); j++){
            if (i != j){
                if (s[i] == s[j]){
                    res = s[i];
                    break;
                }
            }
        }
    }

    cout << res;
    */


    // I
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    bool res = false;

    for (int i = 0; i < s2.size() - s1.size() + 1; i++){
        if (s1 == s2.substr(i, s1.size())){
            res = true;
            break;
        }
    }

    if (res){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}