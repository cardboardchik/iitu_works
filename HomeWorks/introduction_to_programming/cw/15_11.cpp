#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string file_name;

    getline(cin, file_name);

    string path = file_name + ".txt";

    ifstream file(path);
    string data;
    int res = 1;

    if (!file.is_open()){
        cout << -1;
        return 0;
    }

    getline(file, data);

    for (int i = 0; i < data.size(); i++){
        if (data[i] == 32){
            res++;
        }
    }

    cout << res;
    
    
    
    return 0;
}