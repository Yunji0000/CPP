#include <iostream>
using namespace std;

class Base {
    public:
        void f() {
            cout << "Base::f() called" << endl; // Base 클래스의 f() 함수
        }
};

class Deived : public Base {  // 클래스는 Base 클래스를 상속
    public:
        void f() { // Base 클래스의 f() 함수를 오버라이딩
            cout << "Derived::f() called" << endl;
        }
};

int main() { 
    Deived d, *pDer; // Deived 클래스의 객체 d와 해당 객체를 가리키는 포인터 pDer 선언
    pDer = &d; // pDer에 d 객체의 주소를 저장
    pDer -> f(); // Derived::f() 호출 (파생 클래스의 f() 호출)

    Base* pBase; // Base 클래스 타입의 포인터 pBase 선언
    pBase = pDer; // 업캐스팅: Derived 객체를 Base 타입 포인터로 가리킴
    pBase -> f(); // Base::f() 호출 (정적 바인딩으로 Base 클래스의 f()가 호출됨)
}

// //Base 클래스의 f() 함수는 "Base::f() called"를 출력
// Deived 클래스는 Base 클래스를 상속받으며, f() 함수를 오버라이딩하여 "Derived::f() called"를 출력합니다.
// 업캐스팅(Upcasting): pBase = pDer;로 Derived 객체를 Base 클래스 포인터로 참조하게 됩니다. 그러나 이 경우 C++에서는 기본적으로 정적 바인딩이 적용되어, 포인터가 Base 타입일 때 Base::f()가 호출됩니다.