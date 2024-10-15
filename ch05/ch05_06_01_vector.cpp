#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> fibonacci {0, 1, 1, 2, 3, 5, 8};

    for(auto& number : fibonacci){
        cout << number << ' ';

        cout << endl;
    }
    return 0;
}