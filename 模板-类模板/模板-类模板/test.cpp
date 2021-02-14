#include<iostream>
#include<string>
using namespace std;
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << this->m_Name << endl;
		cout << this->m_Age << endl;
	}
private:
	string m_Name;
	int m_Age;
};
void test01()
{
	Person<string, int> p("уехЩ", 100);
	p.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}