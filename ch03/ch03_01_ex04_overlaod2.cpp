#include <iostream>
using namespace std;

void print(int a){
    cout << "정수 출력: " << a << endl;
}

void print(double b){
    cout << "실수 출력: " << b << endl;
}

void print(char c){
    cout << "문자 출력: " << c << endl;
}

int main(){
    print(3);
    print(3.14);
    print('S');
    return 0;
}

// int print(int input){
//     return input;
// }

// double print(double input){
//     return input;
// }

// char print(char input){
//     return input;
// }

// int main(){
//     int a;
//     double b;
//     char c;

//     if(cin >> a) {
//         cout << "정수 출력: " << print(a) << endl;
//     }

//     if(cin >> b) {
//     cout << "실수 출력: " << print(b) << endl;
//     }

//     if(cin >> c) {
//     cout << "문자 출력: " << print(c) << endl;
//     }

//     return 0;
// }