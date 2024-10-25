#include <iostream>
#include <string>
using namespace std;

class Converter {
    protected:
        double ratio;  // 환율 또는 변환 비율
        virtual double converter(double src) = 0;  // 순수 가상 함수
        virtual string getSourceString() = 0;  // 순수 가상 함수
        virtual string getDestString() = 0;  // 순수 가상 함수
    public:
        Converter(double r) {  // 생성자
            this->ratio = r;  // 전달받은 r을 ratio로 초기화
        }
        void run() {  // 변환을 실행하는 함수
            double src;
            cout << getSourceString() << "을 " << getDestString() << "으로 변환" << endl;
            cout << getSourceString() << " 입력: ";
            cin >> src;
            cout << "결과: " << converter(src) << " " << getDestString() << endl;
        }
};

class WonToDollar : public Converter {
    protected:
        double converter(double src) override {  // 변환 함수
            return src / ratio;  // 원을 달러로 변환
        }
        string getSourceString() override {  // 원 문자열 반환
            return "원";
        }
        string getDestString() override {  // 달러 문자열 반환
            return "달러";
        }
    public:
        WonToDollar(double ratio) : Converter(ratio) {}  // 생성자
};

class Test : public WonToDollar {
    protected:
        virtual double converter(double src) {
            return 2.0;
        }
    public:
        Test(double test) : WonToDollar(test) {}
};

class KmToMile : public Converter {
    protected:
        double converter(double src) override {  // 변환 함수
            return src / ratio;  // 킬로미터를 마일로 변환
        }
        string getSourceString() override {  // 킬로미터 문자열 반환
            return "킬로미터";
        }
        string getDestString() override {  // 마일 문자열 반환
            return "마일";
        }
    public:
        KmToMile(double ratio) : Converter(ratio) {}  // 생성자
};

int main() {
    WonToDollar wd(1010);  // 1달러에 1010원
    KmToMile kmToMile(1.60934);  // 1 마일 = 1.60934 킬로미터

    // wd.run(); // 원 -> 달러 변환 실행
    // kmToMile.run(); // 킬로미터 -> 마일 변환 실행

    Test test(10);

    test.run();

    Converter *p;
    p = &wd;
    p ->run();

    p = &kmToMile;
    p -> run();
}
