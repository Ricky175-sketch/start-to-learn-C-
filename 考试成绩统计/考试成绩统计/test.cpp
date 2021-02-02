#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << arr[i][0] + arr[i][1] + arr[i][2] <<" ";
	}
	system("pause");
	return 0;
}