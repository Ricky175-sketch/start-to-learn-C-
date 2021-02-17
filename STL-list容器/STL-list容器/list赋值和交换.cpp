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
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	list<int> l2;
	l2 = l1;
	printList(l2);

	list<int>l3;
	l3.assign(l1.begin(), l1.end());
	printList(l3);

	list<int>l4;
	l4.assign(10, 666);
	printList(l4);
}
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);

	cout << "交换前： " << endl;
	printList(L1);
	printList(L2);
	cout << endl;

	L1.swap(L2);

	cout << "交换后： " << endl;
	printList(L1);
	printList(L2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}