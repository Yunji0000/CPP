#include <iostream>
using namespace std;

class Adder{
        int op1, op2;

        public:
            Adder(int a, int b);
            int process();
};

Adder::Adder(int a, int b){
    op1 = a;
    op2 = b;
}

int Adder::process(){
    return op1 + op2;
}
