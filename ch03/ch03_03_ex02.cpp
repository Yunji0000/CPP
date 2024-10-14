#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "주민번호 입력: ";
    string input;
    cin >> input;

    string result;
    for (char c : input) {
        if (c != '-') {
            result += c; 
        }
    }
   
    cout << result;

}