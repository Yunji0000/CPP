#include <iostream>
using namespace std;

class Shape{
    protected:
        int x, y;
    public:
        Shape(int x, int y) : x(x), y(y) {}
        virtual void draw() = 0; // return 앖음

        // 가상 소멸자 추가
        virtual ~Shape() {
            cout << "Shape 소멸자 호출" << endl;
        }
};

class Rect : public Shape{
    private:
        int width, height;
    public:
        Rect(int x, int y, int w, int h) : Shape(x, y), width(w), height(h){ }
        void draw(){
            cout << "Rectangle Draw" << endl;
        }
};

int main(){
    Shape *ps = new Rect(0,0,100,100);
    ps -> draw(); // 호출
    delete ps;

    return 0;
}