#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cout << "문자열 입력(한글 안됨): " << endl;
    getline(cin, s, '\n');
    int len = s.length(); //문자열 길이

    for(int i=0; i<len; i++){
        string first = s.substr(0,1); //맨 앞의 문자 1개를 문자열로 분리
        string sub = s.substr(1, len-1); // 나머지 문자들을 문자열로 분리
        s = sub + first; // 두 문자열을 연결하려 새로운 문자열로 만듦
        cout << s <<endl;
    }
}