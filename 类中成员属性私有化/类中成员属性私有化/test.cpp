#include<iostream>
#include<string>
using namespace std;
class Person
{
public://设置接口
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if (age < 0 || age>100)//可以判断数据的有效性
		{
			cout << "输入有误！" << endl;
			return;
		}
		else
		{
			m_Age = age;
		}
	}
	int getAge()
	{
		m_Age = 0;
		return m_Age;
	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;//可读可写
	int m_Age;//只读
	string m_Lover;//只写
};
int main()
{
	Person p;
	p.setName("Ricky");
	cout << p.getName() << endl;
	p.setAge(1000);
	cout << p.getAge()<< endl;
	p.setLover("Chan");
	system("pause");
	return 0;
}