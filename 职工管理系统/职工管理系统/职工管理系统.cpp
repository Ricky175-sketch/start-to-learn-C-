#include<iostream>
#include"workerManager.h"
using namespace std;
int main()
{
	WorkerManager wm;
	int choice;
	do
	{
		wm.ShowMenu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.ExitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			cout << "输入错误，请重新选择！" << endl;
			system("cls");
			break;
		}
	} while (choice);
	system("pause");
	return 0;
}