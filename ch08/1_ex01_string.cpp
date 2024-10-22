#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "yun";
    string s2 = "ji";

    string s3;
    s3 = s1 + s2;

    cout << s3 << endl;
    cout << "s1==s2" << boolalpha << (s1==s2) << endl;

    return 0;

}