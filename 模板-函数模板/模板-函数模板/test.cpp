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
//	//1���Զ������Ƶ�
//	mySwap(a, b);
//	//2����ʾָ������
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
	cout << "�������" << endl;
}
//ģ�����ȷ����T���������Ͳſ���ʹ��
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