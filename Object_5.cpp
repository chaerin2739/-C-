#include <iostream>
#include <string>
#pragma warning(disable : 4996)

using namespace std; 

int main () {
    string s0 ="Hello";
    string s1 =" World!";
    s0.append(s1);
    cout << s0 << endl;

    return 0;

}