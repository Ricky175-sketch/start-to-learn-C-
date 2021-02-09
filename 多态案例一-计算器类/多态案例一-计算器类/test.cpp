#include<iostream>
using namespace std;

class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

class AddCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class MulCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1*m_Num2;
	}
};

void test01()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 200;
	cout << abc->getResult() << endl;
	delete abc;
	abc = new SubCalculator;
	abc->m_Num1 = 200;
	abc->m_Num2 = 100;
	cout << abc->getResult() << endl;
	delete abc;
	abc = new MulCalculator;
	abc->m_Num1 = 5;
	abc->m_Num2 = 10;
	cout << abc->getResult() << endl;
	delete abc;
	abc = NULL;
}

int main()
{
	test01();
	system("pause");
	return 0;
}