#include <iostream>
using namespace std;

class Point {
    int *p;
public: 
    Point(int *p) : p{p} {} // Fixed constructor name
    ~Point() {
        delete p;
    }
    int* operator->() const {
        return p;
    }
    int& operator*() const {
        return *p;
    }
};

int main() {
    Point p(new int);

    *p = 100;
    cout << *p << endl;
    return 0;
}
