#include <iostream>
#include <functional>
#include <vector>
#include <cmath>
#include <algorithm>

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

double max_charge(int r){
    double k = 9e9;
    double E = 3e6;

    double q;

    q = 4 * k * r * E;
    return q;

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

    //*5
double dis(double );
int main(){
    int n;
    cin>>n;
   cout<<dis(n);
}
double dis(double x){
    vector<double>sum;
    for (int i = 0; i < x; ++i) {
        int p=0;
        cout<<i+1<<" =";
        cin>>p;
        sum.push_back(p);

    }
    double h =0;
    for (int i = 0; i < x; ++i) {
        h += sum[i];}
        h = h/x;


    double fgs =0;
    for (int i = 0; i < x; ++i){
        fgs += pow((sum[i] - h), 2);

    }
    fgs = fgs/x;
    return fgs;
}*//*6
int ddd(int);
int main() {
    for (int a = 100000; a < 1000000; a++) {
        int first = a / 1000;
        int second = a % 1000;
        if (ddd(first) == ddd(second)) {
            cout << a << endl;
        }
    }
}
int ddd(int x){
    int g=0;
    while(x>0){
        g += x%1000;
        x /=1000;
    }
    return g;

}*//*7
int pol(int );
int main(){
    int a,b;
    cin>>a>>b;
    if(pol(a) || pol(b)) {
        cout << "yes";
    } else{
        cout<<"no";
    }
    return 0;

}
int pol(int x){
     int num = x;
     int rev = 0;
    while (x>0){
        int first = x %10;
        rev = rev * 10 + first;
        x /=10;
    }
    return num == rev;
}*//*8
bool dfg(int X, int Y, int Z) {
    return !(Z && X) || (!Y && X);
}

bool fgh(int X, int Y, int Z) {
    return (Y || Z) || (!(Y && X));
}

int main() {
    for (int X = 0; X <= 1; X++) {
        for (int Y = 0; Y <= 1; Y++) {
            for (int Z = 0; Z <= 1; Z++) {
                int l1= dfg(X, Y, Z);
                int l2 = fgh(X, Y, Z);
                cout << X << "  " << Y << "  " << Z << "  |       " << l1 << "       |       " << l2 << endl;
            }
        }
    }

    return 0;
}*/
/*10


vector<int> asd(vector<int> f);

int main() {
    int a;
    cin >> a;
    vector<int> fgh;

    for (int i = 0; i < a; ++i) {
        int d;
        cin >> d;
        fgh.push_back(d);
    }

    fgh = asd(fgh);

    for (int i = 0; i < a; ++i) {
        cout << fgh[i] << " ";
    }

    return 0;
}

vector<int> asd(vector<int> f) {
    sort(f.begin(), f.end());
    return f;

}*/
/*11

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;

        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;

    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << decimal << std::endl;

    return 0;
}*//*12


bool dfg(int X, int Y, int Z) {
    return (!X && Z)||(Y && !Z);
}

bool fgh(int X, int Y, int Z) {
    return !Y || (X && !Z)&&Z;
}

int main() {
    for (int X = 0; X <= 1; X++) {
        for (int Y = 0; Y <= 1; Y++) {
            for (int Z = 0; Z <= 1; Z++) {
                int l1= dfg(X, Y, Z);
                int l2 = fgh(X, Y, Z);
                cout << X << "  " << Y << "  " << Z << "  |       " << l1 << "       |       " << l2 << endl;
            }
        }
    }

    return 0;
}*//*13
vector<int> asd(vector<int> f);

int main() {
    int a;
    cin >> a;
    vector<int> fgh;

    for (int i = 0; i < a; ++i) {
        int d;
        cin >> d;
        fgh.push_back(d);
    }

    fgh = asd(fgh);
    int g = fgh.size();

    for (int i = 0; i < g; ++i) {
        cout << fgh[i] << " ";
    }

    return 0;
}

vector<int> asd(vector<int> f) {
    int g;
    g = f.size();
    vector<int>h;
    for (int i = 0; i < g; ++i) {
        if(f[i]>0){
            h.push_back(f[i]);

        }


    }
    sort(h.begin(), h.end());
    return h;

}*//*14
void ggg(int&, int&);
int main(){
    int a,b;
    cin>>a>>b;
    ggg(a ,b);
    cout<<a<<"/"<<b;
}
void ggg(int& x, int& y){
    int gcd = 1;
    for (int i = 1; i <= x && i <= y; ++i) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }
    x /= gcd;
    y /= gcd;

}*//*15
vector<int>ggg(  vector<int>);
int main(){
    int a;
    cin>>a;
    vector<int>f(a);
    for (int i = 0; i < a; ++i) {
        int d;
        cin>>d;
        f.push_back(d);

    }
    f = ggg(f);
    for (int elemnt : f) {
        cout<<elemnt;

    }


}
vector<int>ggg( vector<int>x){
    sort(x.begin(), x.end());
    int s;
    s = x.size();
    if(s>=2){
        vector<int>ddd;
        ddd.push_back(x[0]);
        ddd.push_back(x[s-1]);
        return ddd;
    }else{
        return x;
    }


}*/
/*16



vector<vector<int>> qqq(const vector<int>& q, int n) {
    int w = q.size();
    if (w != n * n) {
        cerr << "eror n x n." << endl;
        return vector<vector<int>>();
    }

    vector<vector<int>> qq(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            qq[i][j] = q[i * n + j];
        }
    }

    return qq;
}

int main() {
    int n;
    cout << " n: ";
    cin >> n;

    int c = n * n;
    vector<int> q(c);

    cout << "# " << c << " : ";
    for (int i = 0; i < c; ++i) {
        int r;
        cin >> r;
        q[i] = r;
    }

    vector<vector<int>> r = qqq(q, n);


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << r[i][j] << ' ';
        }
       cout << endl;
    }

    return 0;
}*/
    


    return 0;
}