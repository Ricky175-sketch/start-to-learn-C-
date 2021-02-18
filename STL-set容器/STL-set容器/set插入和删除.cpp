#include<iostream>
#include<set>
using namespace std;
void printSet(const set<int> s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);
	printSet(s);

	s.erase(s.begin());
	printSet(s);

	s.erase(30);
	printSet(s);

	s.clear();
	printSet(s);
}
int main()
{
	test01();
	system("pause");
	return 0;
}