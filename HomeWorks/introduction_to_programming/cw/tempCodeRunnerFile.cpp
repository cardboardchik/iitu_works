#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string file_name;

    getline(cin, file_name);

    string path = file_name + ".txt";

    ofstream file(path);


    if (file.is_open()){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }

    return 0;
}