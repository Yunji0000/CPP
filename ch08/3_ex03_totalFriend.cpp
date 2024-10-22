#include <iostream>
using namespace std;

class Rect;

class RectManager{
    public:
        bool equals(Rect r, Rect s);
        void copy(Rect& dest, Rect& src);
};

class Rect{ //Rect 클래스 선언
    int width, height;
public:
    Rect(int width, int height){
        this -> width = width;
        this -> height = height;
    }
        friend RectManager;
};

bool RectManager::equals(Rect r, Rect s){ //외부 함수
    if(r.width == s.width && r.height == s.height){ // private 속성을 가진 width, height 접근 할 수 있다
        return true;
    }
    else{
        return false;
    }
}

void RectManager::copy(Rect& dest, Rect& src){
    dest.width = src.width;
    dest.height = src.height;
}

int main(){
    Rect a(3,4), b(5,6);
    RectManager man;

    man.copy(b, a); // a를 b에 복사한다. (b값은 뭐든지 상관없이 true)

    if(man.equals(a,b)){
        cout << "equals" << endl;
    }
    else{
        cout << "not equals" << endl;
    }
}