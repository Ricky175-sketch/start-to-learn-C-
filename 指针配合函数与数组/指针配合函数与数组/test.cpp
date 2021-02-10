#include<iostream>
using namespace std;
void Bubble_Sort(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void Print(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort(arr,sz);
	Print(arr,sz);
	system("pause");
	return 0;
}