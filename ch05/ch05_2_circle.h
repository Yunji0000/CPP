#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;

        Circle();
        Circle(int r);
        
        ~Circle(); //소멸자

        double getArea(); 
};