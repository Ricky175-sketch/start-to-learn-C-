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
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	cout << "Ìæ»»Ç°£º" << endl;
	for_each(v.begin(), v.end(), myPrint());
	replace_if(v.begin(), v.end(), Greater20(), 66666);
	cout << endl;
	cout << "Ìæ»»ºó£º" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}