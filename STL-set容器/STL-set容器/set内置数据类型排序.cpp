#include<iostream>
#include<set>
using namespace std;
class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};
void test01()
{
	set<int, MyCompare> s;
	s.insert(10);
	s.insert(20);
	s.insert(40);
	s.insert(30);
	for (set<int, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}