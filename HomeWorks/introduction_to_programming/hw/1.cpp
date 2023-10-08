#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> a = {1, 1, 2, 3, 1,1, 5, 2,1, 3, 1};
    int max = a.size();
    int co = 0;
    for (int i = 0; i < max; i++){
        if (1 == a[i-co]){
            a.erase(a.begin() + i-co);
            co++;
        }
        for (int j = 0; j < a.size(); j++){
            cout << a[j] << " ";
        }
        cout << endl << i << " " << co << endl;
    }

    for (int i =0 ; i < a.size(); i++){
        cout << a[i] << " ";
    }

    return 0;
}