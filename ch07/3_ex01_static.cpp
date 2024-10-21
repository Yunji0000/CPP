#include <iostream>
using namespace std;

class Person{
    public:
        int money; //개인 소유의 돈
        void addMoney(int money){
            this -> money += money;
        }
    static int shareMoney; //공급
    static void addShared(int n){
        shareMoney += n;
    }
};

//static 변수 생성. 전역 공간에 생성
int Person::shareMoney = 10; // 초기화

// int main(){
//     Person han;
//     han.money = 100; //han의 개인 돈 = 100
//     han.shareMoney = 200; //static 멤버 접근, 공급 = 200

//     Person lee;
//     lee.money = 150; //개인돈 150
//     lee.addMoney(200);// 개인돈 350
//     lee.addShared(200); //static 멤버 접근, 공급 = 400
    
//     cout << han.money << ' ' << lee.money <<endl; // 각자의 돈
//     cout << han.shareMoney << ' ' << lee.shareMoney <<endl; //공통 돈
// }


int main(){
    Person::addShared(50); //static 멤버 접근, 공급 = 60
    cout << Person::shareMoney <<endl;

    Person han;
    han.money = 100;
    han.shareMoney = 200; //static 멤버 접근, 공급 = 200
    Person::shareMoney = 300; //static 멤버 접근, 공급 = 300
    Person::addShared(100); //static 멤버 접근, 공급 = 400

    cout << han.money <<' ' << Person::shareMoney <<endl;
}
