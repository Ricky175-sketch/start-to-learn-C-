#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
void test01()
{
	vector<int> v;
	for (int i = 0; i < 1000; i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);
	cout << total << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}