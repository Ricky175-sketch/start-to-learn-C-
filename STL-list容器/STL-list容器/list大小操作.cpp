#include<iostream>
#include<list>
using namespace std;
void printList(const list<int>& L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
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
	l.push_back(40);
	printList(l);

	if (l.empty())
	{
		cout << "l为空！" << endl;
	}
	else
	{
		cout << "l不为空！" << endl;
		cout << "l的大小为：" << l.size() << endl;
	}

	l.resize(10);
	printList(l);

	l.resize(3);
	printList(l);
}
int main()
{
	test01();
	system("pause");
	return 0;
}