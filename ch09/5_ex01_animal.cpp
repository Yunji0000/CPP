#include <iostream>
using namespace std;

class Animal{
    public:
        void speak() {
            cout << "Animal speak()" << endl;
        }
};

class Dog : public Animal{
    public:
        int age;
        void speak(){
            cout << "멍멍" << endl;
        }
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "야옹" << endl;
        }
};

int main() {
    Animal* a1 = new Dog();
    a1->speak();  // Dog의 speak()가 호출됨

    Animal* a2 = new Cat();
    a2->speak();  // Cat의 speak()가 호출됨
    
    //a1 -> ade = 10 오류

    return 0;
}