#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        double marks;

    public:
        Student(string n, double m): name{n}, marks{m} {};

        void ptint(){
            cout << "이름: " << name << endl;
            cout << "학점: " << marks <<endl;
        }

        //getter, setter
        void set_name(string n){
            name = n;
        }
        string get_name(){
            return name;
        }

        void set_marks(double m){
            marks = m;
        }
        double get_marks(){
            return marks;
        }
};

    bool compare(Student& p, Student& q) {
        return p.get_marks() > q.get_marks();
    }

    int main(){
        vector<Student> list;
        string name;
        double marks;

        for(int i=0; i<3; i++){
            cout<< "이름: ";
            cin >> name;
            cout << "학점: ";
            cin >> marks;
            cout << "종료 -1 입력: ";
            int input;
            cin >> input;
            if (input == -1){
                break;
            }
            list.push_back(Student(name, marks));

        }

        list[0].set_marks(4.1); //0번 인덱스 학점 바꾸기 

        sort(list.begin(), list.end(), compare); //정렬
        for(auto& e: list){
            e.ptint();
        }
        return 0;
    }
