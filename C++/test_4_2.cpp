#include <iostream>
#include <string>

using namespace std;

int countDigit(int num){
    if (num == 0)
    return 1;
    int count = 0;
    while (num)
    {
        num /=10;
        count++;
    }
    return count;
}

int countDigitStr(string num) {
    return countDigit(stoi(num));
}

int countDigit(string num) {
    return countDigit(stoi(num));
}

//함수 오버로딩 =  함수 이름은 같은데 파라미터가 다름 근데 반환값은 같음 (예외) 답은 다를 수 있음)

int main(){
    cout << countDigit(12345)<< endl;
    cout << countDigitStr("12345") << endl;
     cout << countDigit("12345") << endl;

}

