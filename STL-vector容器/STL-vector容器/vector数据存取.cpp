#include<iostream>
#include<vector>
using namespace std;
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	cout << v.front() << endl;
	cout << v.back() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}