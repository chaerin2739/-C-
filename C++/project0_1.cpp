#include <iostream>
#include <string>
using namespace std;


string Reverse(string str){
    string rev_str="";
    for ( int i = str.length(); i>= 0; i--)
    {
        rev_str += str[i];
    }
    return rev_str;
}

int main() {
    string a;
    string b;

    cin >> a >> b;

    a = Reverse(a);
    b = Reverse(b);

    if ( a > b)
    {
        cout << a;

    }

    else if (a < b)
    {
        cout << b;
    }
    return 0;
}