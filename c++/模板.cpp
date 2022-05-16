#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
///*template<class T>
//int minimum(T a, T b)
//{	
//	cout << "minimum的非数组被调用" << endl;
//	return min(a,b);
//}
//template<class T,int N,int M>
//int  minimum1(T(&arr)[N],T(&arr2)[M])
//{
//	cout << "minimum的数组被调用" << endl;
//	r*/eturn N > M ? M : N;
//}
template<class T>
void swap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<class T>
void sortd(T arr[],int len)
{
	for (int i = 0; i < len;i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap1(arr[j], arr[j + 1]);
			}
		}
	}
}
template<class T>
void printarr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
//template<class T>
//int minimm(T a, T b, T c)
//{
//	return min(min(a, b), c);
//}
int main()
{
	int a[] = { 1,2,4,6,8,3,7 };
	char b[] = "anhgdsi";
	sortd(a, (sizeof(a) / sizeof(int)));
	sortd(b, (sizeof(b) / sizeof(char)));
	printarr(a, (sizeof(a)/sizeof(int)));
	printarr(b, (sizeof(b)/sizeof(char)));
	return 0;
} 