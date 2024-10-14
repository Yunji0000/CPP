#include <iostream>
using namespace std;

int square(int n){
    return n * n;
}

int main(){
    int input;
    cin >> input;
    cout << "제곱 결과: " << square(input) <<endl;
}