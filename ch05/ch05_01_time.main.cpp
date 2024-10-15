#include "ch05_01_time.h"
using namespace std;

int main(){
    Time a;
    Time b{10,25}; // == Time b(10,25) == Time b = {10,25}

    a.print();
    b.print();

    return 0;

}