#include<iostream>
#include<string>
using namespace std;
class Person
{
public://���ýӿ�
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
		if (age < 0 || age>100)//�����ж����ݵ���Ч��
		{
			cout << "��������" << endl;
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
	string m_Name;//�ɶ���д
	int m_Age;//ֻ��
	string m_Lover;//ֻд
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