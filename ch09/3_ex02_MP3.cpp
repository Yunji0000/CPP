#include <iostream>
using namespace std;

class MP3{
    public:
        void play();
        void stop();
};

class MobilePhone{
    public:
        bool sendCall();
        bool receiveCall();
        bool sendSMS();
        bool receiveSNS();
};

class MusicPhone : public MP3, public MobilePhone { // 다중 상속 선언
    public:
            void dial();
};

//다중 상속 활용
void MusicPhone::dial(){
    play();
    sendCall();
}

int main(){
    MusicPhone handPhone;
    handPhone.play();
    handPhone.sendSMS();
}