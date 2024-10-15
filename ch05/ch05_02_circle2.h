#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;
        Circle(); // 위임 생성자
        Circle(int a); // 타켓 생성자
        double getArea();
};

Circle::Circle():Circle(1) { } //위임 생성자. 호출 r에 1 전달

Circle::Circle(int r){ // return 가질 수 없음
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}