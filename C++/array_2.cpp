#include <iostream>
//#= 전처리 지시어
#include <ctime>
#include <string>
#include <cstring>

using namespace std;

int main()
{
   // int arr[3] ={1,};
    // = int arr[3]{};
    //cout << arr[0] << endl;
    //cout << arr[1] << endl;
    //cout << arr[2] << endl;

    char str [] = "abc";
    char str1 [] = "abc";


    if (strcmp(str,str1)==0)
        cout <<"ook" << endl;

    string str2 ="Hello";
    string str3 = "World";

    if (str2 == str3)
    cout << "Ok" << endl;

    str2 += str3;

    cout << str2 << endl;

    
}