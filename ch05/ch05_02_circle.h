#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;
        Circle(); //매개 변수 없는 생성자(생성자는 반드시 클래스명과 동일) -> Circle() 자동 호출
        Circle(int a); // 매개 변수 있는 생성자(중복 생성 가능) -> Circle() 자동 호출
        double getArea();
};

Circle::Circle(){ // return 가질 수 없음
    radius = 1;
    cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r){ // return 가질 수 없음
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}