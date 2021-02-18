#include<iostream>
#include<map>
using namespace std;
void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << it->first << " value=" << it->second <<endl;
	}
}
void test01()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	printMap(m1);

	if (m1.empty())
	{
		cout << "m1为空！" << endl;
	}
	else
	{
		cout << "m1不为空！" << endl;
		cout << "大小为：" << m1.size() << endl;
	}
}
void test02()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	map<int, int> m2;
	m2.insert(pair<int, int>(10, 100));
	m2.insert(pair<int, int>(20, 200));
	m2.insert(pair<int, int>(30, 300));
	m2.insert(pair<int, int>(40, 400));

	printMap(m1);
	printMap(m2);
	m1.swap(m2);
	cout << endl;
	printMap(m1);
	printMap(m2);
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}