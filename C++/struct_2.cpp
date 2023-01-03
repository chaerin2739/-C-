#include <iostream>

using namespace std;
//구조체
int main ()
{
    // person 데이터 타입 안에 여러가지 데이터 타입이 들어가도 됨, 단 배열은 안됨, 구조체만 가능
    struct Grade {
        string web;
    };

    struct Person
    {
        string name;
        int grade;
        Grade test;
    };

    Person person;
    person.name = "YOO";
    person.grade = 3;
    person.test.web = "JS";



    cout << person.name << endl;
    cout << person.grade << endl;
    cout << person.test.web << endl;

}