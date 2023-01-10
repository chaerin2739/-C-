#include <iostream>

using namespace std;

int main () {
    int s;
    cin >> s;
    int *arr = new int [s]{};

    arr [0] =1;
    cout << arr [0] <<endl;

    delete[] arr; //중요

}