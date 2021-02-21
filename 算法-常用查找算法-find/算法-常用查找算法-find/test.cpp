#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没找到！" << endl;
	}
	else
	{
		cout << *it << endl;
	}
}
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Person& p)
	{
		if(this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test02()
{
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person pp("ccc", 30);
	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "没找到！" << endl;
	}
	else
	{
		cout << "找到了：" << it->m_Name << " " << it->m_Age << endl;
	}
}
int main()
{
	test02();
	system("pause");
	return 0;
}