#include <iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    
    public:
        Time(){
            hour = 0;
            minute = 0;
            second = 0;
        }

        Time(int h, int m, int s): hour(h), minute(m), second{s}{}

        void set_hour(int h){ //아래 메인함수에 시간을 다르게 출력하고 싶을 때
            if(h >=24){
                hour = 0;
            } else{
                hour  = h;
            }
        }

        void set_minute(int m){
            minute = m;
        }
        void set_second(int s){
            second = s;
        }

        int get_hour(){
            return hour;
        }

        void inc_hour();
        void print();
};

void Time::inc_hour() {
    ++hour;
    if(hour > 23){
        hour = 0;
    }
}

void::Time::print(){
    cout << hour << ":" << minute << ":" << second << endl;
}

int main(){
    // Time t; //위에 Time 초기한값 불러옴
    // t.print(); // 그대로 출력

    Time t;
    Time t2(1, 30, 30);
    t.print();

    t.inc_hour(); // 1 증가
    t.print();

    t.set_hour(13);
    t.set_minute(30);
    t.set_second(59);
    t.print();

    t2.print();

    cout << "t time: " << t.get_hour() <<endl;

}