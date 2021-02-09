#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	virtual void speak() = 0;
	virtual ~Animal() = 0;
};
Animal::~Animal()//纯虚析构函数必须要有实现
{
	cout << "Animal纯虚析构函数调用" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	void speak()
	{
		cout <<*m_Name<<"小猫在说话" << endl;
	}
	~Cat()
	{
		cout << "Cat析构函数调用" << endl;
		if (this->m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};

void test01()
{
	Animal* abs =new Cat("Tom");
	abs->speak();
	delete abs;
}

int main()
{
	test01();
	system("pause");
	return 0;
}