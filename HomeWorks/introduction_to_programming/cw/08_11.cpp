#include <iostream>
#include <cstring>

using namespace std;

int main() {
string s1;

int res = 1;

getline(cin, s1);

for (int i = 0; i < s1.length(); i++){
    if (s1[i] == 32){
        res++;
    }
}
cout << res;

return 0;
}
