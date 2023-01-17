#include <iostream>

using namespace std;


void swap (int px, int py){
    cout << "px addr : " <<&px << endl;
    cout <<  "py addr : " << &py <<endl;
    int temp = px;
    px = py;
    py = temp;
}

int main(){
    int x = 10;
    int y = 20;
    cout << "x addr : " <<&x << endl;
    cout <<  "y addr : " << &y <<endl;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    swap(x,y);
    // int temp;
    // int px=x;
    // int py=y;
    // temp = px;
    // px = py;
    // py = temp;
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
}