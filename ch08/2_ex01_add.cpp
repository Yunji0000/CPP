#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0){
        this -> kick = kick;
        this -> punch = punch;
    }
    void show();
    Power& operator << (int n); // 연산 후 Power 객체의 참조 리턴
};

void Power::show(){
    cout << "kick = " << kick << ',' << "punch = " << punch <<endl; 
}

Power& Power::operator <<(int n){ //+ 연산자 멤버 함수 구현
    kick += n;
    punch += n;
    return *this; //더한 결과 리턴
}

int main(){
    Power a(1, 2);
    a << 3 << 5 << 6; //(1, 2) + 3 -> +5 -> +6
    a.show();
} 