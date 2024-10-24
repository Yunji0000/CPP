#include <iostream>
#include <string>
using namespace std;

class TV{
    int size; //스크린 크기
public:
    TV(){
        size = 20;
    }
    TV(int size){
        this -> size = size;
    }
    int getSize(){
        return size;
    }
};

class WideTV : public TV{ //TV를 상속받는 WideTV
    bool videoln;
public:
    WideTV(int size, bool videoln) : TV(size){
        this -> videoln = videoln;
    }
    bool getVideoln(){
        return videoln;
    }
};

class SmartTV : public WideTV{
    string ipAdder;
public:
    SmartTV(string ipAdder, int size) : WideTV(size, true){
        this -> ipAdder = ipAdder;
    }
    string getIpAdder(){
        return ipAdder;
    }
};

int main(){
    SmartTV htv("192.0.0.1", 32);
    cout << "size = " << htv.getSize() <<endl;
    cout << "videoln = " << boolalpha << htv.getVideoln() << endl;
    cout << "IP = " << htv.getIpAdder() << endl;
}
