#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
void myPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v;
	v.resize(10);
	fill(v.begin(), v.end(), 666);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}