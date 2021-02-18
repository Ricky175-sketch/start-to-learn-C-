#include<iostream>
#include<map>
using namespace std;
void printMap(map<int, int> m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << "value=" << it->second << "\t";
	}
	cout << endl;
}
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(10, 100));
	m.insert(pair<int, int>(20, 200));
	m.insert(pair<int, int>(30, 300));
	m.insert(pair<int, int>(40, 400));
	printMap(m);

	map<int, int> m2(m);
	printMap(m2);

	map<int, int> m3;
	m3 = m;
	printMap(m3);
}
int main()
{
	test01();
	system("pause");
	return 0;
}