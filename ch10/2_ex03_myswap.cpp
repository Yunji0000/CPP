#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius = 1){
        this -> radius = radius;
    }
    int getRadius() {
        return radius;
    }
};

template <class T>
void myswap(T & a, T & b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 4;
    int b = 5;
    myswap(a, b); //함수 구체화 및 호출
    cout << "a = " << a << "," << "b = " << b << endl;

    double c = 0.3;
    double d = 12.5;
    myswap(c, d); //함수 구체화 및 호출
    cout << "c =  " << c << " ," << "d = " <<  d << endl; 

    Circle donut(5), pizza(20);
    myswap(donut, pizza); //함수 구체화 및 호출
    cout << "donut 반지름 = " << donut.getRadius() <<   ",";
    cout << "pizza 반지름 = " << pizza.getRadius() << endl; 
}