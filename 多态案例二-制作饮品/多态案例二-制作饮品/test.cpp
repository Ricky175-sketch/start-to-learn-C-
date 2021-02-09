#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrinking
{
	void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	void Brew()
	{
		cout << "���뿧��" << endl;
	}
	void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

class Tea :public AbstractDrinking
{
	void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	void Brew()
	{
		cout << "�����Ҷ" << endl;
	}
	void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	void PutSomething()
	{
		cout << "�������" << endl;
	}
};

void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;
}

void test01()
{
	doWork(new Coffee);
	cout << "--------------------" << endl;
	doWork(new Tea);
}


int main()
{
	test01();
	system("pause");
	return 0;
}