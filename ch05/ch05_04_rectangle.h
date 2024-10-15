#include <iostream>
using namespace std;

class Rectangle{
    public:
        int width;
        int heigth;

    Rectangle();
    Rectangle(int a, int b);
    Rectangle(int c);

    bool isSquare();
};

    Rectangle::Rectangle(){
        width = heigth = 1;
    }

    Rectangle::Rectangle(int a, int b){
        width = a;
        heigth = b;
    }

    Rectangle::Rectangle(int c){
        width = heigth = c;
    }

    bool Rectangle::isSquare() {
        if(width == heigth){
            return true;
        }
        
        return false;
    
    }