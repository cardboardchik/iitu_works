#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
/*=====================(M)


int main() {
    string s;
    cin >> s;
    int i, j;
    cin >> i >> j;
    string substring = s.substr(i - 1, j - i + 1);
    reverse(substring.begin(), substring.end());
    s.replace(i - 1, j - i + 1, substring);
    cout << s << endl;

    return 0;
}*/
/*================================(N)
int main(){
    string s;
    getline(cin,s);

    bool d= false;
    for(char c : s){
        if(c != ' '){
            cout<< c;
            d= false;
        }else{
            if(!d){
                cout<<' ';
                d= true;
            }
        }
    }
    return 0;
}
*//*==================================(i)
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    int wordCount = 0;
    bool inWord = false;
    std::string lastWord;

    for (char c : input) {
        if (c != ' ' && !inWord) {
            inWord = true;
            wordCount++;
            lastWord = c;  // начинаем новое слово
        } else if (c != ' ') {
            lastWord += c;  // добавляем символ к текущему слову
        } else if (c == ' ' && inWord) {
            inWord = false;
        }
    }

    // Проверяем, что в строке было хотя бы одно слово
    if (wordCount > 0) {
        std::cout << "Последнее слово в предложении: " << lastWord << std::endl;
    } else {
        std::cout << "В предложении нет слов." << std::endl;
    }

    return 0;
}*/
/*
 * #include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string firstWord, lastWord;
    bool first = true;
    size_t start = 0;

    for (size_t i = 0; i <= input.length(); ++i) {
        if (i == input.length() || input[i] == ' ') {
            std::string word = input.substr(start, i - start);
            if (first) {
                firstWord = word;
                first = false;
            }
            lastWord = word;
            start = i + 1; // Следующий символ после пробела
        }
    }

    // Проверяем, что в строке было хотя бы два слова
    if (!firstWord.empty() && !lastWord.empty()) {
        // Заменяем первое слово последним и наоборот
        input.replace(input.find(firstWord), firstWord.length(), lastWord);
        input.replace(input.find(lastWord), lastWord.length(), firstWord);

        std::cout << "Строка с поменянными местами первым и последним словами: " << input << std::endl;
    } else {
        std::cout << "В строке недостаточно слов для обмена." << std::endl;
    }

    return 0;
}*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    string firstWord, lastWord;
    bool first = true;
    int start = 0;

    for (int i = 0; i <= input.length(); ++i) {
        if (i == input.length() || input[i] == ' ') {
            string word = input.substr(start, i - start);
            if (first) {
                firstWord = word;
                first = false;
            }
            lastWord = word;
            start = i + 1; // Следующий символ после пробела
        }
    }

    // Проверяем, что в строке было хотя бы два слова
    if (!firstWord.empty() && !lastWord.empty()) {
        // Заменяем первое слово последним и наоборот
        input.replace(input.find(firstWord), firstWord.length(), lastWord);
        input.replace(input.find(lastWord), lastWord.length(), firstWord);

        cout << "Строка с поменянными местами первым и последним словами: " << input << endl;
    } else {
        cout << "В строке недостаточно слов для обмена." << endl;
    }

    return 0;
}
