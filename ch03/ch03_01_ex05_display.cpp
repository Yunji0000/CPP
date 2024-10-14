#include <iostream>
using namespace std;

void displqy(char c = '*', int n = 10){
    for(int i=0; i < n; i++){
        cout << c;
    }
    cout << endl;
}

int main(){
    cout << "인수 전달 안함: ";
    displqy();

    cout << "첫번째 인수(char)만 전달: ";
    displqy('#');

    cout << "모든 인수 전달" ;
    displqy('#', 5);

    return 0;
}
