#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 1);
	if (ret)
	{
		cout << "�ҵ��ˣ�" << endl;
	}
	else
	{
		cout << "û�ҵ���" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}