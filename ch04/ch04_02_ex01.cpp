#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;
        string color;

        double calcArea(){
            return 3.14 * radius * radius;  
        }
};

int main(){
    Circle obj; //  객체 생성 + 여러개 가능 Circle obj1, obj2; 

    obj.radius = 100;
    obj.color = "blue";

    cout << "차량 색상: " << obj.color << "\n";
    cout <<  "원의 면적: " << obj.calcArea() << "\n";

    return 0;
}