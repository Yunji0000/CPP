#include "ch05_2_circle.cpp"
using namespace std;

Circle globalDonut(1000); //전역 객체 생성
Circle globalPizza(2000); //전역 객체 생성

void f(){
    Circle fDonut(100); //지역객체 생성
    Circle fPizza(200); //지역객체 생성
}
int main(){
//     Circle donut;
//     Circle pizza(30);

//     return 0; //함수 종료되면 main() 함수의 스택에 생성된 pizza, donut 객체 소멸(객체 생성의 반대순으로 소멸)
// }

        Circle mainDonut; //지역 객체 생성
        Circle mainPizza(30); //지역 객체 생성
        f();
};