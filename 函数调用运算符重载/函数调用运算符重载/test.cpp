#include<iostream>
#include<string>
using namespace std;
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};
void test01()
{
	MyAdd myAdd;
	int ret=myAdd(10, 10);
	cout << ret << endl;
	cout << MyAdd()(20, 20) << endl;//匿名对象调用
}
void test02()
{
	MyPrint()("Ricky");
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}