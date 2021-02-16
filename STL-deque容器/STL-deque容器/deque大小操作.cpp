#include<iostream>
#include<deque>
using namespace std;
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printDeque(d);

	if (d.empty())
	{
		cout << "dΪ�գ�" << endl;
	}
	else
	{
		cout << "d��Ϊ�գ�" << endl;
		cout << "d�Ĵ�СΪ��" << d.size() << endl;
	}

	d.resize(15, 6);
	printDeque(d);

	d.resize(5);
	printDeque(d);
}
int main()
{
	test01();
	system("pause");
	return 0;
}