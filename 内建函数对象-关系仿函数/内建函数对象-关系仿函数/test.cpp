#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
/*
template<class T> bool equal_to<T>                    //����
template<class T> bool not_equal_to<T>            //������
template<class T> bool greater<T>                      //����
template<class T> bool greater_equal<T>          //���ڵ���
template<class T> bool less<T>                           //С��
template<class T> bool less_equal<T>               //С�ڵ���
*/
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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