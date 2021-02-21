#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Greater4
{
public:
	bool operator()(int val)
	{
		return val >= 4;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num = count_if(v.begin(), v.end(), Greater4());
	cout << num << endl;
}
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class Less35
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age < 35;
	}
};
void test02()
{
	vector<Person> v;
	Person p1("Áõ±¸", 35);
	Person p2("¹ØÓğ", 35);
	Person p3("ÕÅ·É", 35);
	Person p4("ÕÔÔÆ", 30);
	Person p5("²Ü²Ù", 25);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	int num = count_if(v.begin(), v.end(), Less35());
	cout << num << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}