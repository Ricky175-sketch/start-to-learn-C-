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
void test01()
{
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);

	l.push_front(100);
	l.push_front(200);
	l.push_front(300);
	printList(l);

	l.pop_back();
	printList(l);

	l.pop_front();
	printList(l);

	list<int>::iterator it = l.begin();
	l.insert(++it, 2000);
	printList(l);

	it = l.begin();
	l.erase(++it);
	printList(l);

	l.push_back(10000);
	l.push_back(10000);
	l.push_back(10000);
	printList(l);
	l.remove(10000);
	printList(l);

	l.clear();
	printList(l);
}
int main()
{
	test01();
	system("pause");
	return 0;
}