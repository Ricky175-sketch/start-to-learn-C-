#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
void animalSpeak(Animal& animal)
{
	animal.speak();
}
void test01()
{
	Cat cat;
	animalSpeak(cat);
	Dog dog;
	animalSpeak(dog);
}
int main()
{
	test01();
	system("pause");
	return 0;
}