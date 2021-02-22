#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
	}
	vector<int> vv;
	vv.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vv.begin());
	for_each(vv.begin(), vv.end(), myPrint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}