#include <iostream>
using namespace std;

class Calculator {
    // input() 함수는 protected로 선언해야 run()에서 접근 가능
    protected:
        int a, b;
        void input() { 
            cout << "정수 2개 입력: ";
            cin >> a >> b;
        }
        virtual int calc(int a, int b) = 0;  // 순수 가상 함수, 파생 클래스에서 구현

    public:
        void run() {
            input();  
            cout << "결과: " << calc(a, b) << endl;
        }
};

class Adder : public Calculator {
    protected:
        int calc(int a, int b) override {  // calc() 함수 오버라이드
            return a + b;
        }
};

class Subtract : public Calculator {
    protected:
        int calc(int a, int b) override {  // calc() 함수 오버라이드로 수정
            return a - b;
        }
};

int main() {
    Adder adder;  // Adder 객체 생성
    Subtract subtract;  // Subtract 객체 생성

    adder.run();  // Adder의 run() 호출
    subtract.run();  // Subtract의 run() 호출
}
