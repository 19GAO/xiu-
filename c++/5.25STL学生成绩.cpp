#pragma once
#include <iostream>
#include <vector>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;
class Student
{

public:
	Student(string name, int score)
	{
		this->_name = name;
		this->_Ascore = score;
	}
	int _Ascore;//平均分
	string _name;//学生姓名

};
//创造学生对象
void creatStudent(vector<Student>& stu)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "学生";
		name += nameSeed[i];
		int score = 0;
		Student s(name, score);
		stu.push_back(s);
	}
}
//记录总成绩
int sum = 0;
//生成随机成绩去掉最大小值后取平均值
void SetScore(vector<Student>& stu)
{
	srand((unsigned)time(0));
	for (vector<Student>::iterator it = stu.begin(); it != stu.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 101;
			d.push_back(score);
		}

		cout << "选手" << it->_name << "：" << endl;
		cout << "分数" << ":";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int evr = sum / d.size();
		it->_Ascore = evr;
		if(sum!=0)
		{
			sum = 0;
		}
	}
}
//输出平均值
void Prints(vector<Student>& stu)
{

	for (vector<Student>::iterator it = stu.begin(); it != stu.end(); it++)
	{
		cout << "选手" << it->_name << "平均分：" << it->_Ascore << endl;
	}

}
int main()
{
	vector<Student> s;
	creatStudent(s);
	SetScore(s);
	Prints(s);
}
