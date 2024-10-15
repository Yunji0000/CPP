#include <iostream>
using namespace std;

class Point{
    int x, y;
    
    public:
        Point();
        Point(int a, int b);

        void show() {
            cout << "(" << x << "," << y << ")" <<endl; 
        }

};

// Point::Point() {
//     x = 0;
//     y = 0;
// }
// Point::Point(int a, int b){
//     x = a;
//     y = b;
// }

Point::Point() : Point(0,0){ } // 위임 생성자
Point::Point(int a, int b) : x(a),y(b) { } //타켓 생성자