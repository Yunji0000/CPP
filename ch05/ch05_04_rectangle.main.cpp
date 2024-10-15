#include "ch05_04_rectangle.h"
using namespace std;

int main(){
    Rectangle rec1;
    Rectangle rec2(3, 5);
    Rectangle rec3(3);

    if(rec1.isSquare()) cout << "rect1은 정사각형" << endl;
    if(rec2.isSquare()) cout << "rect2은 정사각형" << endl;
    if(rec3.isSquare()) cout << "rect3은 정사각형" << endl;
}