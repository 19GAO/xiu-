#include <iostream>
using namespace std;
class Intclub {
private:
	int _n = 0;
	int* _string;
public:
	Intclub(int n = 1) :_n(n) {
		int len = sizeof(_string);
		_string = new int[len + 1];
	}
	Intclub(const char* string );
	~Intclub();
	int& operator[](int n);
	int& pushback(int n);
};

Intclub::Intclub(const char* string)
{
	delete[]string;
	int len = sizeof(_string);
	string = new char[len + 1];
}

Intclub::~Intclub()
{
	delete[]_string;
}

int& Intclub::operator[](int n)
{
	int ch = 0;
	if (n > _n)
	{
		cout << "erro!" << endl;
		return ch;
	}
	else
		return _string[n];// TODO: 在此处插入 return 语句
}

int& Intclub::pushback(int n)
{
	int len1 = this->_n;
	int len2 = n;
	if (n > _n)
	{
		return _string[n + len1 - len2];
	}
	else
		return _string[n];
}
int main()
{
	Intclub test01(741741741);
	test01.pushback(16);

}
