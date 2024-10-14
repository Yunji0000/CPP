#include <iostream>
using namespace std;

class Rectangle{ // 키워드 클래스명 {
    public: // 접근자 정의
        int width, height; // 멤버 변수
        int calcArea(){ //멤버 함수 -> inline 함수
            return width * height;
        }
};

int main(){
    Rectangle obj;

    obj.height = 10;
    obj.width = 5;

    cout << obj.calcArea() << endl;
}