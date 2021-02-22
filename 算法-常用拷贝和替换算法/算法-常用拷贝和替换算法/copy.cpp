#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int> vc;
	vc.resize(v.size());
	copy(v.begin(), v.end(), vc.begin());
	for_each(vc.begin(), vc.end(), myPrint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}