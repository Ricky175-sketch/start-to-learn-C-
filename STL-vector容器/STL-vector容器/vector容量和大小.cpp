#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	printVector(v);

	if (v.empty())
	{
		cout << "vΪ�գ�" << endl;
	}
	else
	{
		cout << "v��Ϊ�գ�" << endl;
		cout << "v������Ϊ��" << v.capacity() << endl;
		cout << "v�Ĵ�СΪ��" << v.size() << endl;
	}
	v.resize(15, 66);
	printVector(v);

	v.resize(5);
	printVector(v);
}
int main()
{
	test01();
	system("pause");
	return 0;
}