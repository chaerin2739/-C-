#include <iostream>

using namespace std;


class Person {

private:
	int _num;
public:
	Person(int num) : _num(num) {
		cout << "持失切" <<_num<< endl;
	}
	~Person()
	{
		cout << "社瑚切" << _num << endl;
	}
	void print()
	{
		cout << "Hello World!" << endl;
	}
};

Person person0(0);
Person* person1 = new Person(1);

void func()
{
	static Person person2(2);

}
int main() {
	Person person3(3);
	Person* person4 = new Person(4);
	{
		Person person5(5);
		Person* person6 = new Person(6);
}
	delete person4;
	func();
	func();

}