#include<iostream>
using namespace std;
int* func1()
{
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);//�ڶ�������һ����������
	return p;
}
int* func2()
{
	int* arr = new int[10];//�ڶ�������һ��10�������ݵ�����
	return arr;
}
int main()
{
	int* p = func1();
	cout << *p << endl;
	delete p;
	int* arr = func2();
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	delete[] arr;
	system("pause");
	return 0;
}