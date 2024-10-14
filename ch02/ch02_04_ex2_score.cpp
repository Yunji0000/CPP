#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void prod_score(int s){
    if(s  >= 90){
        cout << s << ": A" <<endl;
    }
    else if( s >= 80){
        cout << s << ": B" <<endl;
    }
    else{
        cout << s << ": F" <<endl;
    }
}

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


    int i = 0;
    while (i < 10)
    {
        if(max <a[i]) {
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
        prod_score(a[i]);
        i++;

    }
    
    // for(auto i :a){
    //     if(max <i) {
    //         max = i;
    //     }
    //     if(min > i){
    //         min = i;
    //     }
    //     prod_score(i);
    // }
    cout << "min: " << min; 
    cout << " max: " << max <<endl;
    
    return 0;
}