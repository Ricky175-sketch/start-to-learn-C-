#include<iostream>
using namespace std;
class Person
{
public:
	//Person operator+(Person& p)//通过成员函数重载加号
	//{
	//	Person tmp;
	//	tmp.m_A = this->m_A + p.m_A;
	//	tmp.m_B = this->m_B + p.m_B;
	//	return tmp;
	//}
public:
	int m_A;
	int m_B;
};
Person operator+ (Person& p1, Person& p2)//通过全局函数重载加号
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}
void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	Person p2;
	p2.m_A = 20;
	p2.m_B = 10;
	Person p3 = p1 + p2;
	cout << p3.m_A << " " << p3.m_B << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}