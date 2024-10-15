// #include "ch05_02_circle.h"
#include "ch05_02_circle2.h"
using namespace std;

int main(){
    Circle donut; //매개변수 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30); //매개변수 있는 생성자 호출
    area = pizza.getArea();
    cout << "pizza 면적은 " << area <<endl; 

    return 0;

}