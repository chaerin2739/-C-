#include <iostream>
//#= 전처리 지시어
using namespace std;

int main()
{
    //십진수 이진수 8진수 16진수로 표현하기

    //int num0 = 10;
    //int num1 = 0b10;
    //int num2 = 010;
    //int num3 = 0X10;

    //cout << num0 << endl;
    //cout << num1 << endl;
    //cout << num2 << endl;
    //cout << num3 << endl;

    // short num0;
    // int num1; 
    // int64_t num2;
    // long long num3;
    // cout << sizeof(num0) << endl;
    // cout << sizeof(num1) << endl;
    // cout << sizeof(num2) << endl;
    // cout << sizeof(num3) << endl;


    float num0 = 0.1f;
    float num1 = 0.02f * 5.0f;

    if (num0 ==num1)
    cout << "OK" << endl;
    cout.precision(64);
    cout << num0 << endl;
    cout << num1 << endl;
    //실수끼리 비교를 안하는 이유 = 같은 실수여도 뒤에 자리수가 다름
    
}