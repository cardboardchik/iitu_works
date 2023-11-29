#include <iostream>
using namespace std;
class Point {
    private:
        int x, y;
    
    public:
        void set(int new_x, int new_y);
        int get_x();
        int get_y();
};

int main(){
    Point p1, p2;
    p1.set(10, 20);
    cout << p1.get_x() << ", " << p1.get_y() << endl;
    p2.set(-5, 25);
    cout << p2.get_x() << ", " << p2.get_y() << endl;

    return 0;
};

void Point::set(int new_x, int new_y){
    if (new_x < 0){
        new_x *= -1;
    }
    if (new_y < 0){
        new_y *= -1;
    }

    x = new_x;
    y = new_y;
};

int Point::get_x(){
    return x;
};

int Point::get_y(){
    return y;
};


