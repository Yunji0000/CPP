#include <iostream>
using namespace std;

class Time{
    public:
        int hour; // 0~23
        int minute; // 0~59 

        // Time(){ //생성자의 중복 정의 가능
        //     hour = 0;
        //     minute = 0;
        // }

        // Time(int h=0, int m=0){  
        //     hour = h;
        //     minute = m;
        // }

        Time(int h=0, int m=0) : hour{h}, minute{m}{
        }

        void print(){
            cout << hour << ":" <<minute << endl;
        }
};