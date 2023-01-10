#include <iostream>

using namespace std;

int main () {
// const가 붙으면 해당되는 주소의 변수는 바꿀 수가 없음 , 주소는 바꿀 수 있음
    int num0 = 10;
    const int *pNum0 = &num0;

    int num1 = 20;
    pNum0 = &num1;
 // -> 오류뜨는 걸 알 수 있음   *pNum0 = 30;

 //const가 뒤에 붙으면 해당 주소를 바꿀 수 없음, 변수는 바꿀 수 있음
    int *const pNum1 = &num0;
    *pNum1 = 30;
// ->  오류가 뜨는 걸 볼 수 있음    pNum1 = &num0;
    cout << *pNum1 << endl;

// 둘다 붙이면 주소값과 주소의 변수 둘 다 바꿀 수 없음
    const int *const pNum3 = &num0;
    
}