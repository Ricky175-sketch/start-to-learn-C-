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
	bool operator==(Person& p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
private:
	string m_Name;
	int m_Age;
};
void test01()
{
	Person p1("Ricky", 20);
	Person p2("Ricky", 19);
	if (p1 == p2)
	{
		cout << "p1与p2相等" << endl;
	}
	else
	{
		cout << "p1与p2不相等" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}