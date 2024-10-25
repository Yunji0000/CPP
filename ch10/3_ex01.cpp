#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    try{
        if(b < 0){
            throw "음수 불가";
        }
        if(b==0){
            throw b;
        }
        cout << a/b << endl;
    }
    catch(const char* s){
        cout << s << endl;
    }

    catch(int e){
        cout << e <<" 나눌 수 없음" << endl;
    }

    cout << "항상 출력되는 cout" << endl;
}