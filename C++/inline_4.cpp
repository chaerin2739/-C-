#include <iostream>

using namespace std;

inline int sum(int x,int y ){
    return x + y;
}

int main() {
    int x =1;
    int y =2;
    cout << sum(x, y) << endl;
}