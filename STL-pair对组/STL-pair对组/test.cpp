#include<iostream>
#include<string>
using namespace std;
void test01()
{
	pair<string, int>p("����", 19);
	cout << p.first << endl;
	cout << p.second << endl;

	pair<string, int>p2 = make_pair("����", 20);
	cout << p2.first << endl;
	cout << p2.second << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}