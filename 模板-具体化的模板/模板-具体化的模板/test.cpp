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
//��ͨ����ģ��
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
//����ģ����廯 ���ȼ�������ͨ����ģ��
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
	Person p1("����", 18);
	Person p2("����", 20);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}