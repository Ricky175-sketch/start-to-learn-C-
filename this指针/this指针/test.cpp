#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		this->age = age;//�βθ���Ա����ͬ��ʱ�����������ͻ����
	}
	Person& AddAge(Person& p)//���ض�����Ҫ�����õķ�ʽ����
	{
		this->age += p.age;
		return *this;
	}
	int age;
};
void test01()
{
	Person p(10);
	cout << "����Ϊ��" << p.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.AddAge(p1).AddAge(p1).AddAge(p1);
	cout << "p2����Ϊ��" << p2.age << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}