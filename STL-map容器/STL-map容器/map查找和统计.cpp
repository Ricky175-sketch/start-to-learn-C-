#include<iostream>
#include<map>
using namespace std;
void test01()
{
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	map<int, int>::iterator pos = m.find(2);
	if (pos != m.end())
	{
		cout << "�ҵ��ˣ�" << pos->first << "  " << pos->second << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}

	int num = m.count(3);
	cout << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}