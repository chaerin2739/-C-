#include <iostream>

using namespace std;

int main () {
   // int *p = nullptr;
    // cout << *p << endl;
    // int *p0 = NULL;
    // cout << *p0 << endl;

    int num = 0;
    int *p = &num;
    cout << *p << endl;
    void *vp = p;
    int *p0 = (int *)vp;
    cout << *p0 << endl;

    // -> 에러 뜸 ( 보이드는 정해진 값이 아니기 때문에 출력을 할 수 없음)cout << *vp <<endl;

    int *P = (int *)malloc(sizeof(int)* 3); //인트로 선언을 할거다 = int *
    

}
