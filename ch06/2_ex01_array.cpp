#include <iostream>
using namespace std;

int main(){
    cout << "입력할 정수의 개수: ";
    int n;
    cin >> n; 

    if(n <= 0){
        return 0;
    }

    int *p; 

    try {
        p = new int[n]; // n개의 정수 배열 동적 할당
    } catch (exception e) {
        cout << "메모리를 할당 할 수 없음";
        return 0;
    }

    for(int i=0; i<n; i++){
        cout << i+1 << "번째 정수: "; 
        cin >> p[i];
    }

    double sum = 0;
    for(int i=0; i<n; i++){
        sum += p[i];
    }
    cout << "평균 = " << sum/n << endl;

    delete [] p; // 배열 메모리 반환 
}