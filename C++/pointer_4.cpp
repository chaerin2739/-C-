#include <iostream>

using namespace std;

void swap(int * px, int * py){
    int temp = *px;
    *px = *py;
    *py = temp;
    cout << px <<endl;
    cout << py <<endl;
}

int main()
{
    int x =10;
    int y = 20;

    cout << x <<endl;
    cout << y <<endl;
    cout << &x <<endl;
    cout << &y <<endl;
    
    swap(&x, &y);
    cout << x <<endl;
    cout << y <<endl;

}