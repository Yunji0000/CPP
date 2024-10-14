#include <iostream>
#include <string>
using namespace std;

int main(){
    string dna_1, dna_2;
    int count = 0;

    cout << "DAN1: ";
    cin >> dna_1;

    cout << "DNA2: ";
    cin >> dna_2;

    if(dna_1.length() != dna_2.length()){
        cout << "오류: 길이 다름" << endl;
    }
    else{
        for(int i=0; i<dna_1.length(); i++){
            if(dna_1[i] != dna_2[i]){
                count += 1;
            }
        }
        cout << "해밍거리: " << count <<endl;
    }
    return 0;

}