#include <iostream>
using namespace std;

int main() {
    int pizza_slices = 0;     // 피자 조각 수
    int person = -1;          // 사람 수 (초기값 -1)
    int slices_per_person = 0; // 한 사람당 피자 조각 수

    try { //예외가 발생할 수 있는 부분 입력
        // 피자 조각 수 입력
        cout << "피자 조각 수 입력: ";
        cin >> pizza_slices;

        // 사람 수 입력
        cout << "사람 수 입력: ";
        cin >> person;

        // 예외 처리: 사람이 0명일 경우 또는 음수일 경우 예외 발생
        if (person <= 0) {
            throw person;  // 사람 수가 0 이하일 경우 예외 던짐
        }

        // 한 사람당 피자 조각 수 계산
        slices_per_person = pizza_slices / person;
        cout << "한 사람당 피자는 " << slices_per_person << " 조각입니다." << endl;
    }
    catch (int e) {
        // 예외 처리: 사람 수가 0 이하인 경우 처리
        if (e == 0) {
            cout << "사람이 0명입니다. 피자를 나눌 수 없습니다." << endl;
        } else {
            cout << "사람 수가 음수입니다. 잘못된 입력입니다." << endl;
        }
    }

    return 0;
}
