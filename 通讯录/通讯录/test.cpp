#include<iostream>
#include<string>
#include<memory>
#define MAX 10
using namespace std;
enum Option
{
	EXIT,
	ADD,
	SHOW,
	DELETE,
	SEARCH,
	MODIFY,
	CLEAR
};
struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};
void showMenu(void)
{
	cout << "***********************" << endl;
	cout << "**** 1、添加联系人 ****" << endl;
	cout << "**** 2、显示联系人 ****" << endl;
	cout << "**** 3、删除联系人 ****" << endl;
	cout << "**** 4、查找联系人 ****" << endl;
	cout << "**** 5、修改联系人 ****" << endl;
	cout << "**** 6、清空联系人 ****" << endl;
	cout << "**** 0、退出通讯录 ****" << endl;
	cout << "***********************" << endl;
}
void showModify(void)
{
	cout << "请选择要修改的信息：" << endl;
	cout << " 1、姓名 " << endl;
	cout << " 2、性别 " << endl;
	cout << " 3、年龄 " << endl;
	cout << " 4、手机号码 " << endl;
	cout << " 5、地址 " << endl;
	cout << " 0、退出修改 " << endl;
}
void showPeo(Addressbooks* ps,int ret)
{
	cout << "姓名：" << ps->personArray[ret].m_Name << "\t";
	cout << "性别：" << (ps->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
	cout << "年龄：" << ps->personArray[ret].m_Age << "\t";
	cout << "手机号码：" << ps->personArray[ret].m_Phone << "\t";
	cout << "地址：" << ps->personArray[ret].m_Addr << endl;
}
void InitContact(Addressbooks* ps)
{
	memset(ps->personArray, 0, sizeof(ps->m_Size));
	ps->m_Size = 0;
}
void addPerson(Addressbooks* ps)
{
	system("cls");
	if (ps->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
	}
	else
	{
		cout << "请输入姓名：" << endl;
		cin >> ps->personArray[ps->m_Size].m_Name;
		cout << "请选择性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if ((sex == 1) || (sex == 2))
			{
				ps->personArray[ps->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入：" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> ps->personArray[ps->m_Size].m_Age;
		cout << "请输入手机号码：" << endl;
		cin >> ps->personArray[ps->m_Size].m_Phone;
		cout << "请输入地址：" << endl;
		cin >> ps->personArray[ps->m_Size].m_Addr;
		ps->m_Size++;
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");
	}
}
void showPerson(const struct Addressbooks* ps)
{
	system("cls");
	if (ps->m_Size == 0)
	{
		cout << "当前记录为空！" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->m_Size; i++)
		{
			cout << "姓名：" << ps->personArray[i].m_Name << "\t";
			cout << "性别：" << (ps->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << ps->personArray[i].m_Age << "\t";
			cout << "手机号码：" << ps->personArray[i].m_Phone << "\t";
			cout << "地址：" << ps->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(Addressbooks* ps, string name)
{
	int i = 0;
	for (i = 0; i < ps->m_Size; i++)
	{
		if (ps->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}
void deletePerson(Addressbooks* ps)
{
	system("cls");
	cout << "请输入要删除的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret < 0)
	{
		cout << "要删除的联系人不存在！" << endl;
	}
	else
	{
		showPeo(ps, ret);
		for (int i = ret; i < ps->m_Size; i++)
		{
			ps->personArray[i] = ps->personArray[i + 1];
		}
		ps->m_Size--;
		cout << "删除成功！" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* ps)
{
	system("cls");
	cout << "请输入要查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret=isExist(ps, name);
	if (ret < 0)
	{
		cout << "查无此人！" << endl;
	}
	else
	{
		cout << "姓名：" << ps->personArray[ret].m_Name << "\t";
		cout << "性别：" << (ps->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << ps->personArray[ret].m_Age << "\t";
		cout << "手机号码：" << ps->personArray[ret].m_Phone << "\t";
		cout << "地址：" << ps->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* ps)
{
	system("cls");
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret=isExist(ps, name);
	if (ret < 0)
	{
		cout << "输入有误！" << endl;
	}
	else
	{
		int modify = 0;
		while (true)
		{
			showPeo(ps, ret);
			showModify();
			cin >> modify;
			switch (modify)
			{
			case 1:
			{
				cout << "请输入姓名：" << endl;
				cin >> ps->personArray[ret].m_Name;
				cout << "修改成功！" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				cout << "请选择性别：" << endl;
				cout << "1 -- 男" << endl;
				cout << "2 -- 女" << endl;
				int sex = 0;
				while (1)
				{
					cin >> sex;
					if ((sex == 1) || (sex == 2))
					{
						ps->personArray[ret].m_Sex = sex;
						break;
					}
					cout << "输入有误，请重新输入：" << endl;
				}
				cout << "修改成功！" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				cout << "请输入年龄：" << endl;
				cin >> ps->personArray[ret].m_Age;
				cout << "修改成功！" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				cout << "请输入手机号码：" << endl;
				cin >> ps->personArray[ret].m_Phone;
				cout << "修改成功！" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 5:
			{
				cout << "请输入地址：" << endl;
				cin >> ps->personArray[ret].m_Addr;
				cout << "修改成功！" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 0:
				cout << "退出成功！" << endl;
				system("pause");
				system("cls");
				return;
			default:
				cout << "输入有误！" << endl;
				system("pause");
				system("cls");
				break;
			}
		} 
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* ps)
{
	system("cls");
	cout << "您确定要清空吗？" << endl;
	cout << " 1、YES 2、NO " << endl;
	int ret = 0;
	cin >> ret;
	if (ret == 1)
	{
		ps->m_Size = 0;
		cout << "通讯录已清空！" << endl;
		system("pause");
		system("cls");
	}
	else if (ret == 2)
	{
		cout << "取消清空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "输入有误！" << endl;
		system("pause");
		system("cls");
	}
}
int main()
{
	int input = 0;
	struct Addressbooks abs;
	InitContact(&abs);
	do
	{
		showMenu();
		cin >> input;
		switch (input)
		{
		case ADD:
			addPerson(&abs);
			break;
		case SHOW:
			showPerson(&abs);
			break;
		case DELETE:
			deletePerson(&abs);
			break;
		case SEARCH:
			findPerson(&abs);
			break;
		case MODIFY:
			modifyPerson(&abs);
			break;
		case CLEAR:
			cleanPerson(&abs);
			break;
		case EXIT:
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误，请重新输入：" << endl;
			break;
		}
	} while (input);
	system("pause");
	return 0;
}