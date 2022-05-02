#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
/*int main()
{
	int y = 100;
	cout << oct << y << endl;//以八进制输出
	cout << hex << y << endl;//以十六进制输出
	cout << dec << y << endl;//以十进制输出
	//输出精度
    double x = 3.1415926535;
	cout << setprecision(7) << x << endl;
	cout << setw(20) <<setfill('-') << setiosflags(ios::right) << x << endl;
	const double z = 123.1415926;//常变量：不能改变值的变量
	//const double* px;
	//const char* s = "abcd";
	char p[100] = "abcd";//用字符数组作为字符串变量使用
    char* ps = p;
	cout << ps << endl;
	*(ps+2) = 'b';
	cout << ps << endl;
	//enum 是枚举类型
	enum Temp { Hot, Cold, Warm };

    return 0;
}
bool cmp(string a, string b)
{
	return a > b;
}
int main()
{
	int n;
	cin >> n;
	getchar();
	string* a = new string[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, a[i]);
	}
	sort(a, a+n, cmp);
	for (int j = 0; j < n; j++)
	{
		cout << a[j]<<endl;
	}
	return 0;
}*/
class Date
{
private:
	string _str;
public:
	Date(string str) :_str(str) { cout << "Date的构造函数被调用" << endl; }
	~Date(){ cout << "Date的析构函数被调用" << endl; }
	void show() { cout << _str << endl; }
};
class Count
{
	
private:
	Date *_a;
	int _count;
    friend class Smartsrc;
public:
	Count(Date* a) :_a(a), _count(1) { cout << "Count的构造函数被调用" << endl; }
	~Count()
	{
		cout << "Count的析构函数被调用" << endl;
		delete _a;
	}
};
class Smartsrc
{
private:
	Count* _c;
public:
	Smartsrc(Date* a) :_c(new Count(a)) { cout << "Smart的构造函数被调用" << endl; }
	Smartsrc(const Smartsrc& anthor) :_c(anthor._c)
	{
		_c->_count++;
		cout << "第" << _c->_count << "个指针生成" << endl;
	}
	~Smartsrc()
	{
		_c->_count--;
		cout << "释放一个Smartsrc类的指针" << endl;
		if (_c->_count == 0)
		{
			delete _c;
		}
	}
	Date* operator->()
	{
		return _c->_a;
	}
	Date& operator *()
	{
		return *(_c->_a);
	}
};
int main()
{
	
	Smartsrc a = new Date("I Love China");
	Smartsrc b = a;
	b->show();
	(* b).show();
	return 0;
}