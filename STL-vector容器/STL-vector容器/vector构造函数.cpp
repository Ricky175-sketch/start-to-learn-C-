#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());//ͨ�����乹��
	printVector(v2);

	vector<int> v3(10, 666);
	printVector(v3);

	vector<int> v4(v3);
	printVector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}