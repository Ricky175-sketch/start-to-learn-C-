#include<iostream>
#include<functional>
using namespace std;
/*
template<class T> T plus<T>                //加法仿函数
template<class T> T minus<T>              //减法仿函数
template<class T> T multiplies<T>    //乘法仿函数
template<class T> T divides<T>         //除法仿函数
template<class T> T modulus<T>         //取模仿函数
template<class T> T negate<T>           //取反仿函数
*/
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}
void test02()
{
	plus<int> n;
	cout << n(10, 20) << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}