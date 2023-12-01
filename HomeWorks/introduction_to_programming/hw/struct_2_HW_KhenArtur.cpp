#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
 /*======================(e)
struct point{
    int x;
    int y;
};
double distance(const point& p1, const point& p2) {
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}
double perimeter(const point& p1, const point& p2, const point& p3) {
    return distance(p1, p2) + distance(p1, p3) + distance(p2, p3);
}
int main(){
    int k;
    cout<<"how point"<<endl;
    cin>>k;
    vector<point> points(k);
    for (int i = 0; i < k; ++i) {
        cout<<"(x;y) = "<<endl;
        cin>>points[i].x>>points[i].y;
    }
    double maxPerimeter = 0;

    for (int i = 0; i < k - 2; ++i) {
        for (int j = i + 1; j < k - 1; ++j) {
            for (int l = j + 1; l < k; ++l) {
                double currentPerimeter = perimeter(points[i], points[j], points[l]);
                maxPerimeter = max(maxPerimeter, currentPerimeter);
            }
        }
    }
    cout<<maxPerimeter;

}*/
/*=======================(f)
struct point{
    int x;
    int y;
};
double area(const point& p1, const point& p2, const point& p3) {
    return 0.5 * abs((p1.x*(p2.y - p3.y) + p2.x*(p3.y - p1.y) + p3.x*(p1.y - p2.y)));
}
int main(){
    int k;
    cout<<"how point"<<endl;
    cin>>k;
    vector<point> points(k);
    for (int i = 0; i < k; ++i) {
        cout<<"(x;y) = "<<endl;
        cin>>points[i].x>>points[i].y;
    }
    double maxare = 0;

    for (int i = 0; i < k - 2; ++i) {
        for (int j = i + 1; j < k - 1; ++j) {
            for (int l = j + 1; l < k; ++l) {
                double currentare = area(points[i], points[j], points[l]);
                maxare = std::max(maxare, currentare);
            }
        }
    }
    cout<<maxare;

}*/
/*============================(g)
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Student {
    string lastName;
    string firstName;
    double mathGrade;
    double physicsGrade;
    double informaticsGrade;
};
int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].lastName >> students[i].firstName
            >> students[i].mathGrade >> students[i].physicsGrade >> students[i].informaticsGrade;
    }
    double totalMath = 0.0;
    double totalPhysics = 0.0;
    double totalInformatics = 0.0;
    for (const auto& student : students) {
        totalMath += student.mathGrade;
        totalPhysics += student.physicsGrade;
        totalInformatics += student.informaticsGrade;
    }
    double averageMath = totalMath / n;
    double averagePhysics = totalPhysics / n;
    double averageInformatics = totalInformatics / n;
    cout << fixed << setprecision(2);
    cout << averageMath << " " << averagePhysics << " " << averageInformatics << endl;

    return 0;
}

*/
/*========================(h)
#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string lastName;
    string firstName;
    int mathGrade;
    int physicsGrade;
    int informaticsGrade;
};

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cin >> students[i].lastName >> students[i].firstName
            >> students[i].mathGrade >> students[i].physicsGrade >> students[i].informaticsGrade;
    }
    for (const auto& student : students) {
        if (student.mathGrade != 3 && student.physicsGrade != 3 && student.informaticsGrade != 3 &&
            student.mathGrade != 2 && student.physicsGrade != 2 && student.informaticsGrade != 2 &&
            student.mathGrade != 1 && student.physicsGrade != 1 && student.informaticsGrade != 1) {
            cout << student.lastName << " " << student.firstName << endl;
        }
    }

    return 0;
}*/
