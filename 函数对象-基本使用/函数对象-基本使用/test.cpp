#include<iostream>
#include<string>
using namespace std;
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 20) << endl;//函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
}
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string text)
	{
		cout << text << endl;
		count++;
	}
	int count;
};
void test02()
{
	MyPrint myPrint;
	myPrint("hhhhhh");
	myPrint("hhhhhh");
	myPrint("hhhhhh");
	myPrint("hhhhhh");
	myPrint("hhhhhh");
	myPrint("hhhhhh");
	myPrint("hhhhhh");
	cout << myPrint.count << endl;//函数对象超出普通函数的概念，函数对象可以有自己的状态
}
void doPrint(MyPrint& mp, string text)
{
	mp(text);
}
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "hhhhh");//函数对象可以作为参数传递
}
int main()
{
	test03();
	system("pause");
	return 0;
}