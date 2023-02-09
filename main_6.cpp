#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

class String
{
private:
	char* _str;
public:
	String(const char* str) {
		int len = strlen(str);
		_str = new char[len + 1];
		strcpy(_str, str);
	}
	void print() {
		cout << _str << endl;
	}
	~String() {
		delete[] _str;
	}
};

int main()
{
	String str("abc");
	str.print();
}