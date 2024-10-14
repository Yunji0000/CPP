#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int a[10];
    int max;
    int min;
    srand(time(NULL));
    
    for(auto &i : a){
    i = rand() % 100; // 0~99 / 100 + 1 => 1 ~ 99 범위 설정
    cout << i << " ";
    }
    cout << endl;
    max = INT_MIN;
    min = INT_MAX;
    for(auto i :a){
        if(max <i) {
            max = i;
        }
        if(min > i){
            min = i;
        }
    }
    cout << "min: " << min; 
    cout << " max: " << max <<endl;
    
    return 0;
}