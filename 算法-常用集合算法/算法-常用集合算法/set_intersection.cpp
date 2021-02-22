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
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> vh;
	vh.resize(min(v1.size(), v2.size()));
	vector<int>::iterator it=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vh.begin());
	for_each(vh.begin(), it, myPrint());
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}