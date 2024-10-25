#include <iostream>
using namespace std;

class Base {
    public:
        virtual void f() {
            cout << "Base::f() called" << endl; // Base 클래스의 f() 함수
        }
};

class Deived : public Base {  // 클래스는 Base 클래스를 상속
    public:
        virtual void f() { // Base 클래스의 f() 함수를 오버라이딩
            cout << "Derived::f() called" << endl;
        }
};

int main() { 
    Deived d, *pDer; // Deived 클래스의 객체 d와 해당 객체를 가리키는 포인터 pDer 선언
    pDer = &d; // pDer에 d 객체의 주소를 저장
    pDer -> f(); // Derived::f() 호출 (파생 클래스의 f() 호출)

    Base* pBase; 
    pBase = pDer; 
    pBase -> f();
}

//항상 Derived의 f()만 호출됨 -> Base의 f()는 존재감을 잃음   