#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myPrint(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//第一种遍历方式
	/*vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}*/
	//第二种遍历方式
	//for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	//{
	//	cout << *it << endl;
	//}
	//第三种遍历方式
	for_each(v.begin(), v.end(), myPrint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}