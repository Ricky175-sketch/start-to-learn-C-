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
	cout << myAdd(10, 20) << endl;//����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
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
	cout << myPrint.count << endl;//�������󳬳���ͨ�����ĸ����������������Լ���״̬
}
void doPrint(MyPrint& mp, string text)
{
	mp(text);
}
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "hhhhh");//�������������Ϊ��������
}
int main()
{
	test03();
	system("pause");
	return 0;
}