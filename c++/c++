#include <iostream>
using namespace std;
class Family {
public:
	Family(int son = 0, int mum = 1) : _son(son), _mum(mum) {}
	Family operator+(const Family& f);
	~Family();
	void show1(Family over) const;
	//void show2(Family over) const;
	Family operator-(const Family& f);
private:
	int _son;
	int _mum;
	int _overmum;
	int _overson;
};


Family Family :: operator+(const Family& f)
{
	int yu1 = 0; int shang1 = 0; int minbei1 = 0; int maxmum1 = 0; int minmum1= 0;
	Family over(0, 1);
	int maxson1 = 0; int minson1 = 0;
	if (this->_mum > f._mum)
	{
		yu1 = this->_mum % f._mum;
		maxmum1 = this->_mum;
		minmum1 = f._mum;
		minson1 = f._son;
		maxson1 = this->_son;
	}
	else if(this->_mum < f._mum)
	{
		yu1 = this->_mum % f._mum;
		maxmum1 = f._mum;
		minmum1 = this->_mum;
		maxson1 = f._son;
		minson1 = this->_son;
	}
	else
	{
		yu1 = this->_mum / f._mum;
		maxmum1 = f._mum;
		minmum1 = this->_mum;
		maxson1 = f._son;
		minson1 = this->_son;
	}
	if (yu1 == 0)
	{
		shang1 = maxmum1 / minmum1;
		over._overson = (this->_son + f._son);
		over._overmum = minmum1 * shang1;
	}
	else if (yu1 == 1)
	{
		over._overson = this->_son + f._son;
		over._overmum = this->_mum;
	}
	else
	{
		minbei1 = maxmum1 * minmum1;
		over._overson = ((minmum1 * maxson1) + (maxmum1 * minson1));
		over._overmum = minbei1;
	}
	for (int i = 2; i <= 10; i++)
	{
		if (over._overson % i == 0 &&over._overmum % i == 0)
		{
			over._overson = over._overson / i;
			over._overmum = over._overmum / i;
		}
	}
	return over;
}
Family Family :: operator-(const Family& f)
{
	int yu = 0; int shang = 0; int minbei = 0; int maxmum = 0; int minmum = 0;
	Family over(0, 1);
	int maxson = 0; int minson = 0;
	if (this->_mum > f._mum)
	{
		yu = this->_mum % f._mum;
		maxmum = this->_mum;
		minmum = f._mum;
		minson = f._son;
		maxson = this->_son;
	}
	else if (this->_mum < f._mum)
	{
		yu = this->_mum % f._mum;
		maxmum = f._mum;
		minmum = this->_mum;
		maxson = f._son;
		minson = this->_son;
	}
	else
	{
		yu = this->_mum / f._mum;
		maxmum = f._mum;
		minmum = this->_mum;
		maxson = f._son;
		minson = this->_son;
	}
	if (yu == 0)
	{
		shang = maxmum / minmum;
		over._overson = (this->_son - f._son);
		over._overmum = minmum * shang;
	}
	else if (yu == 1)
	{
		over._overson = this->_son - f._son;
		over._overmum = this->_mum;
	}
	else
	{
		minbei = maxmum * minmum;
		over._overson = ((minmum * maxson) - (maxmum * minson));
		over._overmum = minbei;
	}
	for (int i = 2; i <= 10; i++)
	{
		if (over._overson % i == 0 && over._overmum % i == 0)
		{
			over._overson = over._overson / i;
			over._overmum = over._overmum / i;
		}
	}
	return over;
}
Family::~Family()
{
}
void Family::show1(Family over) const
{
	cout << "运算结果是:";
	if (over._overson % over._overmum == 0)
	{
		cout << over._overson / over._overmum<<endl;
	}
	else if (over._overmum % over._overson == 0)
	{
		cout <<"1" << "/" << over._overmum / over._overson<<endl;
	}
	else
		cout << _overson << "/" << _overmum<<endl;
}
int main()
{
	Family a(2, 10);
	Family b(2, 10);
	Family o1,o2;
	o1 = a + b;
	o2 = a - b;
	o1.show1(o1);
	o2.show1(o2);
	return 0;
}
