#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	//string m_Name;//���ԣ���Ա����/��Ա����
	//int m_Id;
	//void showStudent()//��Ϊ����Ա����/��Ա����
	//{
	//	cout << "������:" << m_Name << "\t������:" << m_Id << endl;
	//}
public://��Ϊ
	void setName(string name)
	{
		m_Name = name;
	}
	void setId(int id)
	{
		m_Id = id;
	}
	void showStudent()
	{
		cout << "�����ǣ�" << m_Name << "\t�����ǣ�" << m_Id << endl;
	}
public://����
	string m_Name;
	int m_Id;
};

int main()
{
	Student stu;
	//stu.m_Name = "Ricky";
	//stu.m_Id = 2020;
	stu.setName("Ricky");
	stu.setId(20);
	stu.showStudent();

	system("pause");
	return 0;
}