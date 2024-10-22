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
    Power& operator++();
    Power operator++(int a);

    friend Power operator+(Power op1, Power op2); 

    bool operator ==(Power op2){
        return kick == op2.kick && punch == op2.punch;
    }

    void show();
};


Power operator+(Power op1, Power op2){
    Power tmp;
    tmp.kick = op1.kick + op2.kick;
    tmp.punch = op1.punch + op2.punch;
    return tmp;
}

Power& Power::operator++(){ 
    kick++;
    punch++;
    return *this; //연산 결과 리턴
}


Power Power::operator++(int a){
    Power tmp =* this;
    this -> kick++;
    this -> punch++;
    return tmp;
}

void Power::show(){
    cout << "kick = " << kick << ',' << "punch = " << punch <<endl; 
}

int main(){
    Power a(3,5), b(3,4), c;
    c =a + b;

    a.show();
    b.show();
    c.show();

    if(a==b){
        cout << "power 같음";
    }
    else {
        cout << "다름";
    }
}