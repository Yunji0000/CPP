#include <iostream>
using namespace std;

class Circle{
    int radius;

    public:
        Circle();
        Circle(int r);
        ~Circle();
        void setRadius(int r){
            radius = r;
        }
        double getArea() {
            return 3.14 * radius * radius;
        }
};

 //.h 
Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main(){
    // Circle *p , *q;
    // p = new Circle;
    // q = new Circle(30);
    // cout << p->getArea() << endl << q->getArea() << endl;
    // delete p;
    // delete q;

    int radius;
    while (true)
    {
        cout << "정수 반지름 입력(음수일 시 종료): ";
        cin >> radius;

        if(radius < 0){
            break;
        }

        Circle *p = new Circle(radius); //동적 객체 생성
        cout << "원의 면적: " << p->getArea() << endl;
        delete p;
    }
    
}

