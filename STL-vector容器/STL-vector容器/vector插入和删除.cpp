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
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	printVector(v);

	v.pop_back();
	printVector(v);

	v.insert(v.begin(),666);
	printVector(v);

	v.insert(v.begin(), 2, 6666);
	printVector(v);

	v.erase(v.begin());
	printVector(v);

	v.clear();
	printVector(v);
}
int main()
{
	test01();
	system("pause");
	return 0;
}