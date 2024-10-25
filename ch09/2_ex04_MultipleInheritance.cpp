#include <iostream>
using namespace std;

class PassangerCar{
    public:
        int seats;
        void set_seats(int n){
            seats = n;
        }
};

class Truck{
    public:
        int payload;
        void set_payload(int load){
            payload = load;
        }
};

class Pickup : public PassangerCar, public Truck{
    public:
        int tow_capabioity; //견인 능력
        void set_tow(int capa){
            tow_capabioity = capa;
        }
};

int main(){
    Pickup my_car;
    my_car.set_seats(4);
    my_car.set_payload(10000);
    my_car.set_tow(30000);

    return 0;
}