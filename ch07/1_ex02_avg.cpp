#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg){ //int& 참조 매개 변수 avg에 평균 값 전달
    if(size <= 0){
        return false;
    }
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += a[i];
    }
    avg = sum / size;
    return true;
}

int main(){
    int x[] = {0, 1, 2, 3, 4, 5};
    int avg;
    if(average(x, 6, avg)){ // avg에 평균이 넘어오고 average()는 true 리턴
        cout << "평균: " << avg << endl;
    }
    else {
        cout << "메개 변수 오류" << endl;
    }
    if(average(x, -2, avg)){ // avg의 값(-2))은 의미없고 average()는 false 리턴
        cout << "평균: " << avg << endl;
    }
    else {
        cout << "매개 변수 오류" << endl;
    }
}