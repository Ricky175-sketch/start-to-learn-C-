#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	int m_Age;
	string m_Name;
};
//普通函数模板
template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//函数模板具体化 优先级高于普通函数模板
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age&&p1.m_Name == p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	Person p1("张三", 18);
	Person p2("李四", 20);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}