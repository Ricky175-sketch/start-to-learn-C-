#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	virtual void speak() = 0;
	virtual ~Animal() = 0;
};
Animal::~Animal()//����������������Ҫ��ʵ��
{
	cout << "Animal����������������" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}
	void speak()
	{
		cout <<*m_Name<<"Сè��˵��" << endl;
	}
	~Cat()
	{
		cout << "Cat������������" << endl;
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