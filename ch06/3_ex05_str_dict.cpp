#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << "문자열 입력(끝은 & 입력): " << endl;
    getline(cin, s, '&');
    cin.ignore(); // & 뒤에 엔터키를 제거

    string f, r;
    cout << endl << "find: ";
    getline(cin, f, '\n'); //검색할 문자열 입력
    cout << "replace: ";
    getline(cin, r, '\n'); //대치할 문자열 입력

    int startIndex = 0;
    while(true){
        int fIndex = s.find(f, startIndex); //startIndex부터 문자열 f 검색
        if(fIndex == -1){
            break; // 문자열 s의 끝까지 변경함
        }
        s.replace(fIndex, f.length(), r); //fIndex부터 문자열 f의 길이만큼 문자열 r로 변경
        startIndex = fIndex + r.length();
    }
    cout << s << endl;
}