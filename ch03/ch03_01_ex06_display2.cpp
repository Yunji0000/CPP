#include <iostream>
using namespace std;

// void sum(int a=10, int b=15, int c=25, int d=30){

// }

int sum(int a, int b, int c=0, int d=0){
    int fin = a + b+ c+ d;
    return fin;

}

int main(){
    cout << "sum(10,15) = " << sum(10,15) << endl;
    cout << "sum(10,15, 25) = " << sum(10,15, 25) << endl;
    cout << "sum(10,15, 25, 30) = " << sum(10,15, 25, 30) << endl;
    
    return 0;
}
    
