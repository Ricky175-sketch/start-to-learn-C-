#include<iostream>
#include<list>
using namespace std;
void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int val1, int val2)
{
	return val1 > val2;
}
void test01()
{
	list<int> l;
	l.push_back(90);
	l.push_back(30);
	l.push_back(20);
	l.push_back(70);
	printList(l);

	l.reverse();
	printList(l);

	l.sort();
	printList(l);

	l.sort(myCompare);
	printList(l);
}
int main()
{
	test01();
	system("pause");
	return 0;
}