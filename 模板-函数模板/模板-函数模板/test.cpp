//#include<iostream>
//using namespace std;
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//1、自动类型推到
//	mySwap(a, b);
//	//2、显示指定类型
//	mySwap<int>(a, b);
//
//	cout << a << endl;
//	cout << b << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
template<typename T>
void func()
{
	cout << "新年快乐" << endl;
}
//模板必须确定出T的数据类型才可以使用
void test02()
{
	func<int>();
}
int main()
{
	test02();
	system("pause");
	return 0;
}