#include<iostream>
#include<functional>
using namespace std;
/*
template<class T> T plus<T>                //�ӷ��º���
template<class T> T minus<T>              //�����º���
template<class T> T multiplies<T>    //�˷��º���
template<class T> T divides<T>         //�����º���
template<class T> T modulus<T>         //ȡģ�º���
template<class T> T negate<T>           //ȡ���º���
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