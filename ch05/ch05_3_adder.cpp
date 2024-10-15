#include "ch05_3_adder.h"
using namespace std;

class Calculater{
    public:
        void run();
};

void Calculater::run(){
    cout << "두 개의 수를 입력하세요: ";
    
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process();
}

