#include<iostream>
#include<string>
using namespace std;
void test01()
{
	//����
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}
void test02()
{
	//�滻
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}