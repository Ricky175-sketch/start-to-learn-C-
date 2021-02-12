#include<iostream>
using namespace std;
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
template<typename T>
void Sort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int Max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[Max] < arr[j])
			{
				Max = j;
			}
		}
		if (i != Max)
		{
			Swap(arr[i],arr[Max]);
		}
	}
}
template<typename T>
void Print(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] ;
	}
}
void test01()
{
	char arr[] = "acbdfe";
	int len = sizeof(arr) / sizeof(arr[0]);
	Sort(arr,len);
	Print(arr, len);
}
int main()
{
	test01();
	system("pause");
	return 0;
}