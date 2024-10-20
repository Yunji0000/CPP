#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; 
    cout << "뎃섬 문자열 입력(ex.7+19): " << endl;
    getline(cin, s, '\n');
    int sum = 0;
    int startindex = 0; //문자열 내에 검색할 시작 인덱스

    while(true){
        int findex = s.find('+', startindex);
        if(findex == -1){ //'+' 문자 발견할 수 없음
            string part = s.substr(startindex);
                if(part == ""){ // +로 끝나는 경우
                    break; 
                }
                cout << part << endl;
                sum += stoi(part); //문자열을 수로 변환하여 더하기
                break;
        }
        int count = findex - startindex; //서브스트링으로 자를 문자 개수
        string part = s.substr(startindex, count); //startindex부터 count개의 문자로 서브스트링 만들기
        cout << part << endl;

        sum += stoi(part); //문자열을 수로 변환하여 더하기
        startindex = findex + 1; // 검색을 시작할 인덱스 전진시킴
    }
    cout << "계산 값: " << sum;
}