#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void MyPrint01(int val)
{
	cout << val << " ";
}
class MyPrint02
{
public:
	void operator()(int val)
	{
		cout << val+100 << " ";
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), MyPrint01);
	cout << endl;
	for_each(v.begin(), v.end(), MyPrint02());
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}