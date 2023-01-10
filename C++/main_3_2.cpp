#include <iostream>

using namespace std;

int main () {

    //배열 이름만 적으면 주소값이 나타남 = 배열의 첫번째
    int num [] = {1,2,3};
    cout << num << endl;
    int *pNum = num;

    cout << pNum[0] << endl;
    cout << pNum[1] << endl;
    cout << pNum[2] << endl;
    cout << endl; 

    cout << *(pNum) << endl;
    cout << *(pNum +1) << endl;
    cout << *(pNum +2) << endl;
    cout << endl;

    cout << *pNum << endl;
    pNum++;
    cout << *pNum << endl;
    cout << endl;
    
}