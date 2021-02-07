#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myInt);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	MyInteger& operator--()
	{
		m_Num--;
		return *this;
	}
	MyInteger operator--(int)
	{
		MyInteger tmp = *this;
		m_Num--;
		return tmp;
	}
private:
	int m_Num;
};
ostream& operator<<(ostream& cout, MyInteger myInt)
{
	cout << myInt.m_Num;
	return cout;
}
void test01()
{
	MyInteger myInt;
	cout << --myInt << endl;
	cout << myInt << endl;
}
void test02()
{
	MyInteger myInt;
	cout << myInt-- << endl;
	cout << myInt << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}