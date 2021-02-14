#include<iostream>
using namespace std;
template<class T>
class Base
{
	T m;
};
class Son1 :public Base < int >
{
};
void test01()
{
	Son1 s1;
}
template<class T1,class T2>
class Son2 :public Base < T1 >
{
	T2 n;
};
void test02()
{
	Son2 <int, char>s2;
}
int main()
{
	system("pause");
	return 0;
}