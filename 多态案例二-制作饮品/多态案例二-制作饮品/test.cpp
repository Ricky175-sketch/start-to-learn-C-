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
		cout << "煮农夫山泉" << endl;
	}
	void Brew()
	{
		cout << "倒入咖啡" << endl;
	}
	void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea :public AbstractDrinking
{
	void Boil()
	{
		cout << "煮矿泉水" << endl;
	}
	void Brew()
	{
		cout << "倒入茶叶" << endl;
	}
	void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	void PutSomething()
	{
		cout << "加入枸杞" << endl;
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