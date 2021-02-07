#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<< (ostream& cout,MyInteger myInt);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	MyInteger& operator++()//返回引用为了对同一数据进行加加操作
	{
		m_Num++;
		return *this;
	}
	MyInteger operator++(int)//int为占位参数 区分前置后置递增
	{
		MyInteger tmp=*this;
		m_Num++;
		return tmp;
	}
private:
	int m_Num;
};
ostream& operator<< (ostream& cout, MyInteger myInt)
{
	cout << myInt.m_Num;
	return cout;
}
void test01()
{
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt << endl;
}
void test02()
{
	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}