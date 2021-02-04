#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	//string m_Name;//属性：成员属性/成员变量
	//int m_Id;
	//void showStudent()//行为：成员函数/成员方法
	//{
	//	cout << "姓名是:" << m_Name << "\t年龄是:" << m_Id << endl;
	//}
public://行为
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
		cout << "姓名是：" << m_Name << "\t年龄是：" << m_Id << endl;
	}
public://属性
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