#include<iostream>
#include<set>
using namespace std;
void test01()
{
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);
	
	set<int>::iterator it = s.find(30);
	if (it == s.end())
	{
		cout << "没找到！" << endl;
	}
	else
	{
		cout << "找到了：" << *it << endl;
	}

	int num = s.count(30);
	cout << "num=" << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}