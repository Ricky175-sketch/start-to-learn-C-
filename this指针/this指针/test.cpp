#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		this->age = age;//形参跟成员变量同名时，解决命名冲突问题
	}
	Person& AddAge(Person& p)//返回对象本身，要用引用的方式返回
	{
		this->age += p.age;
		return *this;
	}
	int age;
};
void test01()
{
	Person p(10);
	cout << "年龄为：" << p.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);
	p2.AddAge(p1).AddAge(p1).AddAge(p1);
	cout << "p2年龄为：" << p2.age << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}