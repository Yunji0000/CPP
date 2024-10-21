#include <iostream>
using namespace std;

class Circle {
private:
    static int numOfCircles; // 정적 변수, 원의 개수 저장
    int radius; // 반지름
public:
    Circle(int r = 1); // 생성자
    ~Circle() { 
        numOfCircles--; // 생성된 원의 개수 감소
    }
    double getArea() { 
        return 3.14 * radius * radius; // 원의 면적 계산
    }
    static int getNumOfCircles() { 
        return numOfCircles; // 현재 원의 개수 반환
    }
};

int Circle::numOfCircles = 0; // 정적 변수 초기화

Circle::Circle(int r) {
    radius = r;
    numOfCircles++; // 생성된 원의 개수 증가
}

int main() {
    Circle *p = new Circle[10]; // 10개의 Circle 객체 생성
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    delete[] p; // 10개의 Circle 객체 소멸
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle a; // 생성자 실행
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle b; // 다른 변수 이름으로 선언
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    return 0; // 프로그램 종료
}
