#include <iostream>
//정수를 어떤  타입으로 쓸지 모르니까 설정을 다 해두고 쓸 수 있게 해주는것 = union
union Union
{
    int i;
    float f;
    double d;
};

using namespace std;

int main () {
    Union u;
    int *ip = (int *)&u;
    float *fp = (float *)&u;
    double *dp = (double *)&u;

    u.i=1; //정수형 타입

    cout << u.i << endl;
    cout << *ip << endl;
    
    cout << u.f << endl;
    cout << *fp << endl;

    cout << u.d << endl;
    cout << *dp << endl;
}





//포인터는 변수의 주소를 가르키는 변수

// 메모리 주소를 저장하고 변수

// int main() {
//     int num = 0;

//     int *pointer = &num;
//     cout << num << endl;
//     cout << &num << endl;

//     *pointer = 100;
//     cout << num << endl;


// //초기화를 안해서 쓰래기 값이 뜸
//     int *pNum0;
//     cout << pNum0 << endl;

//   //  int num1;
//   //  cout << num1 << endl;



// }