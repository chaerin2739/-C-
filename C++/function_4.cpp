#include <iostream>

using namespace std;

int cabs(int);

int abssum(int x, int y){
    return cabs(x) + cabs(y);
}

int cabs(int x)
{
    if(x>=0)
    return x;
    else
    return -x;
    //=
    //return x >= 0 ? x : -x;
}

int sum (int x, int y) {
    return x +y;
}


int main(){
    // int num = 0;
    // const int& Num = num;
    // int* p = &num;
    // cout << *p << endl;
    // cout << Num << endl;
    cout << sum(1,2) << endl;
    cout << abssum(10, -20) << endl;
}