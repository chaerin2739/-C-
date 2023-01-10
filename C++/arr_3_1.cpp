#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> vec(5);
//vec 값을 num에게 복사를 해줘서 출력을 함
    for (int num : vec) {
        cout << num << ' ';
    }
    cout << endl;
//백터는 사이즈도 자유자제로 바꿀 수 있음
    vec.resize(10,3);
    for (int num : vec) {
        cout << num << ' ';
    }
      cout << endl;

    cout << vec.size() << endl;
    vec.push_back(100);
    cout <<vec.size() << endl;

    for (int num : vec) {
        cout << num << ' ';
    }
    cout << endl;

    vec.pop_back();
    cout << vec.size() << endl;

}