#include <iostream>

using namespace std;

int pow(int base=2, int exp=2){
    int sum = 1;
    for (int i = 0; i < exp; i++){
        sum *= base;
    }
    return sum;
}

int main () {
    cout << pow(2,10) << endl;
    cout << pow(3) << endl;
    cout << pow() << endl;
    cout << pow(3,3) << endl;
}