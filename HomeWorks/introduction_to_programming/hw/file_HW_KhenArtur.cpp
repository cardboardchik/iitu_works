#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/*==========(2)
void writeEvenNumbers(const string& filename, int N) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Unable to open the file." << endl;
        return;
    }
    for (int i = 1; i <= N; ++i) {
        int evenNumber = 2 * i;
        file << evenNumber << endl;
    }
    file.close();
}
int main() {
    string fileName = "even_numbers.txt";
    int N = 10;
    writeEvenNumbers(fileName, N);
    return 0;
}*/
/*================(4)
#include <string>
#include <iostream>
#include <filesystem>


int main()
{
    string path = "C:\\Users\\DOMEK\\Desktop\\осн";
    for (const auto & entry : filesystem::directory_iterator(path))
        cout << entry.path() << endl;
}
*/
/*=======================(6)
int main(){
string path = "failhm.txt";
ifstream fin(path);
vector<int>arr;
int x;
int k;
cin>>k;
 while(!fin.eof()){
     fin>>x;
     arr.push_back(x);
 }
 int l=0;
 for(int i = 0 ; i<arr.size();i++){
     if(k==arr[i]){
         l++;
     }}
     if(l==0){
         cout<<"-1";
     }else{
         cout<<"yes";
     }
     fin.close()
}
 */