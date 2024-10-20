#include <iostream>
#include <string>
using namespace std;

int main(){
    string str; // 빈 문자열 가진 스트링 객체 생성
    string address("은행나무로 47 사는");
    string copyAddress(address); //addres의 문자열을 복사한 스트링 객체 생성

    char text[] = {'M', 'I', 'N', 'H', 'A','\0' }; //C-스트링
    string title(text); //위 문자열을 가진 스트링 객체 생성

    cout << str << endl;
    cout << address << endl;
    cout << copyAddress <<endl;
    cout << title << endl;
}