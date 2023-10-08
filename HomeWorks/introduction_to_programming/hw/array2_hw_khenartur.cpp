#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    //mid level
    // 1
    /*const int size = 10;
    int arr_1[size], arr_2[size];
    int arr_ans[size];
    
    for (int i = 0; i < size; i++){
        cin >> arr_1[i];
    }

    for (int i = 0; i < size; i++){
        cin >> arr_2[i];
    }

    for (int i = 0; i < size; i++){
        if (i % 2 == 0){
            arr_ans[i] = arr_1[i + 1];
        }
        else if (i % 2 != 0){
            arr_ans[i] = arr_2[i - 1];
        }
    }

    for (int i = 0; i < size; i++){
        cout << arr_ans[i] << " ";
    }
    */

    // 2
    /*const int size = 8;
    int arr[size];
    int arr_new[size];

    for (int i = 0; i < size; i++){
        cin >> arr[i];

        arr_new[i] = arr[i] % 10;
    }

    for (int i = 0; i < size; i ++){
        cout << arr_new[i];
    }
    */

    // 3
    /*const int size = 17;
    int arr[size];
    int answer = 0;

    for (int i = 0; i < size; i++){
        cin >> arr[i];

        answer += arr[i] / 10;
        answer += arr[i] % 10;
    }

    cout << answer;
    */

    // 4
    /*const int size_1 = 9;
    const int size_2 = 7;

    int arr_1[size_1];
    int arr_2[size_2];

    vector <int> arr_ans;

    for (int i = 0; i < size_1; i++){
        cin >> arr_1[i];
        arr_ans.push_back(arr_1[i]);
    }
    for (int i = 0; i < size_2; i++){
        cin >> arr_2[i];
        arr_ans.push_back(arr_2[i]);
    }

    for (int i = 0; i < arr_ans.size(); i++){
        for (int j = 0; j < arr_ans.size() - 1; j++){
            if (arr_ans[j] > arr_ans[j + 1]){
                int a = arr_ans[j + 1];
                arr_ans[j + 1] = arr_ans[j];
                arr_ans[j] = a;
            }
        }
    }

    for (int i = 0; i < arr_ans.size(); i++){
        cout << arr_ans[i] << " ";
    }
    */


    // 5
    /*const int size = 10;
    int X[size], Y[size];
    int S[size], c = 0;

    for (int i = 0; i < size; i++){
        cin >> X[i];
    }

    for (int i = 0; i < size; i++){
        cin >> Y[i];
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (X[i] == Y[j]){
                S[c++] = X[i];
            }
        }
    }

    for (int i = 0; i < c; i++){
        cout << S[i] << " ";
    }
    */

    // 6
    /*const int size = 12;
    double arr[size];
    vector <double> arr_ans;

    vector <double> arr_a;
    double s = 0;

    for (int i = 0; i < size; i++){
        arr[i] = (i * i) - (2 * i) + (19.3 * cos(i));
        s += arr[i];
    }

    s = s / size;

    for (int i = 0; i < size; i++){
        if (arr[i] < s){
            arr_ans.push_back(arr[i]);
        }
        else{
            arr_a.push_back(arr[i]);
        }
    }

    for (int i = 0; i < arr_a.size(); i++){
        arr_ans.push_back(arr_a[i]);
    }

    for (int i =0; i < arr_ans.size(); i++){
        cout << arr_ans[i] << " ";
    }*/
    
    // 7
    /*const int size = 16;
    double Z[size];
    double sum_1 = 0;
    double sum_2 = 0;


    for (int i = 0; i < size; i++){
        cin >> Z[i];
    }
    
    for (int i = 0; i < size; i += 2){
        sum_1 += Z[i];
    }
    for (int i = 0; i < size; i += 3){
        sum_1 += Z[i];
    }

    cout << sum_1 - sum_2;
    */

 
/*8*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], max = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i]%2 != 0){
            if(arr[i]>arr[max])
                max = i;
        }
    }
    cout << "index = " << max << endl;
    return 0;
}
*/
/*9*/
/*
int main(){
    int n, a;
    cout << "n = ";
    cin >> n; 
    float y; 
    vector <int> arr1;
    vector <float> arr2;
    vector <float> arr3;
    cout << "First array:";
    for(int i = 0; i < n; i++){
        cin >> a;
        arr1.push_back(a);
    }
    for(int i = 0; i < n; i++){
        y = cos(pow(arr1[i],2))+2.97*pow(log10(i*i),2);
        arr3.push_back(y);
    }
    sort(arr3.begin(), arr3.end());
    for(int i = n; i > -1 ;i--)
        cout << arr3[i] << " ";
}
*/
/*10*/
/*
int main(){
    int n, a;
    cout << "n = ";
    cin >> n; 
    float y, y2;
    const float e = 2.71;
    vector <int> arr1;
    vector <float> arr2;
    vector <float> arr3;
    cout << "First array:";
    for(int i = 0; i < n; i++){
        cin >> a;
        arr1.push_back(a);
    }
    for(int i = 0; i < n; i++){
        if(cos(arr1[i]) > 0){
            y = pow(arr1[i],3) - 7.5;
            arr2.push_back(y);
        }
        else if(cos(arr1[i]) < 0){
            y2 = pow(arr1[i],2) - 5*pow(e,sin(arr1[i]));
            arr2.push_back(y2);
        }
    }
    sort(arr2.begin(), arr2.end());
    sort(arr1.begin(), arr1.end());
    reverse(arr1.begin(), arr1.end());
    for(int i = 0; i < n; i+=2){
        arr3.push_back(arr2[i]);
        arr3.push_back(arr1[i]);
    }
    for(int i = 0; i < n; i++)
        cout << arr3[i] << " ";
    
}
*/
/*11*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], c, b, arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 99 || arr[i] < 10)
            break;
        b = arr[i]/10;
        c = arr[i]%10;
        arr2[i] = b + c;
    }
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";
}
*/
/*12*/
/*
int main() {
    int n, swaps = 0;
    cout << "n = ";
    cin >> n;
    double arr[n];
    cout << "First array:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    cout << "sorted array:";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "count of swap: " << swaps << endl;
    return 0;
}
*/
/*13*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], total = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]<0)
            if(arr[i]%2 != 0)
                total +=arr[i];
    }
    for(int i = 0; i < n; i++)
        if(arr[i]%3 == 0)
            arr[i] = total;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
*/
/*14*/
/*
int main(){
    int n, b, c, a;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
    b = n;
    c = n/2;
    a = b - c;
    int arr2[c], arr3[a];
    for(int i = 0; i < c; i++)
        arr2[i] = arr[i];
    for(int i = c, j = 0; i < n; i++, j++)
        arr3[j] = arr[i];
    for (int i = 0; i < a; i++)
        cout << arr3[i] << " ";
    for (int i = 0; i < c; i++)
        cout << arr2[i] << " ";
    return 0;
}
*/
/*15*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int s;
    cout << "s = ";
    cin >> s;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int max = arr[0], min = arr[0], indexmin = 0, indexmax = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
            indexmax = i;
        }
        if(arr[i]<min){
            min = arr[i];
            indexmin = i;
        }
    }
    if(s > max)
        cout << "element = " << min << " index = " << indexmin;
    if(s < min)
        cout << "element = " << max << " index = " << indexmax;
    if(s > min && s < max){
        if(abs(s) - abs(min) > abs(abs(s) - abs(max)))
            cout << "element = " << min << " index = " << indexmin;
        else if(abs(abs(s) - abs(max)) > abs(s) - abs(min))
            cout << "element = " << max << " index = " << indexmax;
    }
    return 0;
}
*/
/*16*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], total = 0, count = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];  
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            total +=arr[i];
            count++;
        }
        else
            break;
    }
    cout << "Sum = " << total << " count = " << count;
}
*/
/*17*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], count = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < (n-1); i++)
        if(arr[i] < arr[i-1] && arr[i] < arr[i+1])
            count++;
    cout << "count = " << count << endl;
    return 0;
}
*/
/*18*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], count = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < (n-1); i++)
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            count++;
    cout << "count = " << count << endl;
    return 0;
}
*/
/*19*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], negindex = 1, nullindex = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            negindex++;
        else
            break;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] !=0)
            nullindex++;
        else
            break;
    }

    for(negindex; negindex < nullindex; negindex++)
        cout << arr[negindex] << " ";
}
*/
/*20*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    for(int i = 0; i < n; i++)
        if(arr[i+1] < arr[i])
            cout << i << " ";
}
*/
/*21*/
    /*vector <int> arr;
    arr = {2, 2, 2, 3, 4, 5, 4, 1, 9, 4, 4, 4, 2};

    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            for (int k = 0; k < arr.size(); k++){
                if (arr[i] == arr[j] && arr[i] == arr[k] && arr[k] == arr[j] && i != j && i != k && k != j){
                    int a = arr[i];
                    int max_size = arr.size();
                    int co = 0;
                    for (int n = 0; n < max_size; n++){
                        if (a == arr[n - co]){
                            arr.erase(arr.begin() + n - co);
                            co++;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i]<< " ";
    }
    */
    
/*22*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], arr2[n],arr3[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] <= 0)
            arr2[i] = arr[i];
        else
            continue;
        cout << arr2[i] << " ";
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            arr3[i] = arr[i];
        else
            continue;
        cout << arr3[i] << " ";
    }
    return 0;
}
*/
/*23*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int x[n], product1 = 1, product2 = 1, p;
    double y[n];
    for(int i = 0; i < n; i++)
        cin >> x[i];
    for(int i = 0; i < n; i++){
        y[i] = pow(x[i],2) +0.3;
        cout << y[i] << " ";
    }

    for(int i = 0; i < n; i++){
        if(i%2 != 0)
            product1 *= (x[i]*y[i]);
        else if(i%2 == 0)
            product2 *= (x[i]*y[i]);
    }
    p = product1%product2;
    cout << p;
    return 0;
}
*/
/*24*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n],arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]<10 || arr[i]>99)
            break;
    }
    for(int i = 0; i < n; i++){
        arr2[i] = arr[i]/10-arr[i]%10;
        cout << arr2[i] << " ";
    }
    return 0;
}
*/
/*25*/
/*
*/
/*26*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n],arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "second array:";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            if(arr2[j] == arr[i]){
                arr[i] = 0;
            }
        cout << arr[i] << " ";
    }
}
*/
/*27*/
/*
*/
/*28*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], total1 = 0, total2 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(i%2 == 0)
            total1 += arr[i];
        else if(i%2 != 0)
            total2 += arr[i];
    }
    cout << total1%total2;
}
*/
/*29*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], total = 0, c, count = 0;
    float avg = 0, per;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }
    c = sizeof(arr)/sizeof(int);
    avg = float(total)/c;
    for(int i = 0; i < n; i++){
        if(arr[i] > avg)
            count++;
    }
    per = float(count)*n;
    cout << per << "%";
}
*/
/*30*/
/*
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n], arr2[n];
    cout << "First array:";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Second array:";
    for(int i = 0; i < n; i++)
        cin >> arr2[i]; 
    int max = arr[0], max2 = arr2[0], c;
    for(int i = 0; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr2[i] > max2)
            max2 = arr2[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            arr[i] = max2;
        }
        if (arr2[i] == max2) {
            arr2[i] = max;
        }
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";
}
*/return 0;
}