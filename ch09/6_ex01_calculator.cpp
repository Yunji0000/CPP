#include <iostream>
using namespace std;

class Calculator {
    public:
        // 순수 가상 함수, Calculator는 추상 클래스가 됨
        virtual int add(int a, int b) = 0; 
        virtual int subtract(int a, int b) = 0;
        virtual double average(int a[], int size) = 0;

        virtual ~Calculator() {}  
};


class GoodCalc : public Calculator {  // Calculator 추상 클래스를 상속받는 GoodCalc 클래스
    public:
        // add 함수 구현 (두 정수를 더함)
        int add(int a, int b) {
            return a + b;
        }
        // subtract 함수 구현 (두 정수를 뺌)
        int subtract(int a, int b) {
            return a - b;
        }
        // average 함수 구현 (정수 배열의 평균 계산)
        double average(int a[], int size) {
            double sum = 0;
            for(int i = 0; i < size; i++) {
                sum += a[i]; // 배열의 요소들을 모두 더함
            }
            return sum / size; // 총합을 배열의 크기로 나눠 평균 계산
        }
};

int main() {
    int a[] = {1, 2, 3, 4, 5}; // 정수 배열 선언
    Calculator *p = new GoodCalc(); // 다형성: Calculator 포인터로 GoodCalc 객체 생성

    // add, subtract, average 함수 호출
    cout << p-> add(2, 3) << endl; // GoodCalc의 add() 함수 호출, 결과는 5
    cout << p -> subtract(2, 3) << endl; // GoodCalc의 subtract() 함수 호출, 결과는 -1
    cout << p -> average(a, 5) << endl; // GoodCalc의 average() 함수 호출, 배열 a의 평균 계산

    delete p; // 동적으로 할당된 객체 메모리 해제
}
