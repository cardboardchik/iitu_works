#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;

    int *a = new int[N];

    for (int i = 0; i < N; i++){
        cin >> a[i];
    }

    int c = *(a + N - 1);

    for (int i = 0; i < N; i += 2){
        int b = *(a + i + 1);
        *(a + i + 1) = *(a + i);
        *(a + i) = b;
    }

    if (N % 2 != 0){
        *(a + N - 1) = c;
    }

    for (int i = 0; i < N; i++){
        cout << *(a + i) << " ";
    }
    
    delete[] a;

    return 0;
}