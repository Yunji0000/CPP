#include "ch04_02_ex04_car.h"
// #include "ch04_02_ex04_car.cpp"
using namespace std;

int main(){
    Car myCar;

    myCar.setSpeed(80);
    cout << "현재 속도: " << myCar.getSpeed() << endl;

    return 0;
}