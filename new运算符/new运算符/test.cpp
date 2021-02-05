#include<iostream>
using namespace std;
int* func1()
{
	//new返回的是该数据类型的指针
	int* p = new int(10);//在堆区创建一个整型数据
	return p;
}
int* func2()
{
	int* arr = new int[10];//在堆区创建一个10整型数据的数组
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