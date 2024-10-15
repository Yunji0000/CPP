#include <iostream>
using namespace std;

class Circle{
    public:
        int x, y;
        int radius;

        Circle(): x{0}, y{0}, radius{0} {} //기본 생성자 정의되어 있어야 함
        Circle(int x, int y, int r): x{x}, y{y}, radius{r} {}

        void print(){
            cout << "반지름: " <<radius << "@(" << x << "," << y << ")" << endl; 
        }
};

int main(void){
    Circle objArray[10]; //객체배열 정의 기본 생성자 호출
    
    for(Circle& c: objArray){
        c.x = rand()%500;
        c.y = rand()%300;
        c.radius = rand()%100;
    }
    for(Circle c: objArray){
        c.print();
    }
    return 0;
}
