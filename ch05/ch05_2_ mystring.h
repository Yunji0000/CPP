#include <iostream>
#include <string.h>

class MyString{
    private:
        char *s;
        int size;
    public:
        MyString(const char *c){
            size = strlen(c) + 1;
            s = new char[size];
            strcpy(s, c);
        }

        ~MyString(){ //소멸자 함수 선언: 객체가 사라질때 마무리 작업을 위함(리턴 타입 없))
            delete[] s;
        }
};