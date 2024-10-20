#include <iostream>
#include <memory>
using namespace std;

//스마트포인터는 종적 메모리 할당 후 잊어버려도 자동으로 동적 메모리 삭제됨. 
//자동으로 nullptr로 초기롸
//unique_ptr은 모든 자료형의 포인터로 감쌀 수 있음
// int main(){
//     unique_ptr<int> p(new int);

//     *p = 99; // p 사용
// }


//스마트 포인터로 배열 가리키기
int main(){
    unique_ptr<int[]> buf(new int[10]);

    for(int i=0; i<10; i++){
        buf[i] = i;
    }

    for(int i=0; i<10; i++){
        cout << buf[i] << " ";
    }
    cout << endl;
    return 0;
}