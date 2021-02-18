#include<iostream>
#include<map>
using namespace std;
void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << "   " << it->second << endl;
	}
}
void test01()
{
	map<int, int> m;
	//1、
	m.insert(pair<int, int>(1, 10));
	//2、
	m.insert(make_pair(2, 20));
	//3、
	m.insert(map<int, int>::value_type(3, 30));
	//4、
	m[4] = 40;
	printMap(m);

	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	m.clear();
	printMap(m);
}
int main()
{
	test01();
	system("pause");
	return 0;
}