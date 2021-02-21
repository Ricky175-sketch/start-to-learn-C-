#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(30);
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "没找到！" << endl;
	}
	else
	{
		cout << "找到相邻重复元素为：" << *it << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}