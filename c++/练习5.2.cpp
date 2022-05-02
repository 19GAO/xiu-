#include <iostream>
using namespace std;
class F{
	public:
		F(string name);
		~F();
	private:
		string _name;
};
class f{
	public:
		f(string name);
		~f();
	private:
		string _name;
};
F::F(string name)
{
	
	_name = name;
	cout<<"调用构造函数"<<_name<<endl;
}
f::f(string name)
{
    _name = name;
	cout<<"调用构造函数"<<_name<<endl;
	
}
F::~F()
{
	cout<<"调用析构函数"<<_name<<endl;
}
f::~f()
{
	cout<<"调用析构函数"<<_name<<endl;
}
int main()
{
	F A("A");
	F B("B");
	f a("a");
	f b("b");
	return 0;
}
