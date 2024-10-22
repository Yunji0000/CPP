#include <iostream>
using namespace std;

class Rect;

class RectManager{
    public:
        bool equals(Rect r, Rect s);
};

class Rect{ //Rect 클래스 선언
    int width, height;
public:
    Rect(int width, int height){
        this -> width = width;
        this -> height = height;
    }
        friend bool RectManager::equals(Rect r, Rect s);  
};

bool RectManager::equals(Rect r, Rect s){ //외부 함수
    if(r.width == s.width && r.height == s.height){ // private 속성을 가진 width, height 접근 할 수 있다
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Rect a(3,4), b(4,5);
    RectManager man;

    if(man.equals(a,b)){
        cout << "equals" << endl;
    }
    else{
        cout << "not equals" << endl;
    }
}