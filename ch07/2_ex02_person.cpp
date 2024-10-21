#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char* name;
    int id;
public:
    Person(int id, const char* name); // 생성자
    Person(const Person& person); // 복사 생성자
    ~Person(); // 소멸자
    void changeName(const char *name);
    void show() const {
        cout << id << ", " << name << endl; 
    }
};

Person::Person(int id, const char* name) { // 생성자
    this->id = id;
    int len = strlen(name); // 이름의 길이
    this->name = new char[len + 1]; // 이름을 위한 메모리 할당
    strcpy(this->name, name); // 이름 복사
}

Person::Person(const Person& person) { // 복사 생성자
    this->id = person.id; // ID 복사
    int len = strlen(person.name); // 이름의 길이
    this->name = new char[len + 1]; // 이름을 위한 메모리 할당
    strcpy(this->name, person.name); // 이름 복사
    cout << "복사 생성자 실행. 원본 객체 이름: " << this->name << endl;
}

Person::~Person() { // 소멸자
    delete[] name; // 할당된 메모리 해제
}

void Person::changeName(const char* name) {
    // 이름 변경 시 기존 메모리 해제 후 새 메모리 할당
    delete[] this->name; // 기존 메모리 해제
    int len = strlen(name);
    this->name = new char[len + 1]; // 새 메모리 할당
    strcpy(this->name, name); // 새 이름 복사
}

int main() {
    Person father(1, "Sangjin"); //father 객체 생성
    Person daughter(father); // daugther 객체 복사 생성. 벅사 -> 깊은 복사 생성자 호출

    cout << "딸 객체 생성 직후 -----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Yunji");
    cout << "이름 변경 후 -----" << endl;
    father.show();
    daughter.show();

    return 0; // 뒤에서부터 객체 소멸: 딸, 아빠 순서로 객체 소멸
}
