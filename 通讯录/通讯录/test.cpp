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
	cout << "**** 1�������ϵ�� ****" << endl;
	cout << "**** 2����ʾ��ϵ�� ****" << endl;
	cout << "**** 3��ɾ����ϵ�� ****" << endl;
	cout << "**** 4��������ϵ�� ****" << endl;
	cout << "**** 5���޸���ϵ�� ****" << endl;
	cout << "**** 6�������ϵ�� ****" << endl;
	cout << "**** 0���˳�ͨѶ¼ ****" << endl;
	cout << "***********************" << endl;
}
void showModify(void)
{
	cout << "��ѡ��Ҫ�޸ĵ���Ϣ��" << endl;
	cout << " 1������ " << endl;
	cout << " 2���Ա� " << endl;
	cout << " 3������ " << endl;
	cout << " 4���ֻ����� " << endl;
	cout << " 5����ַ " << endl;
	cout << " 0���˳��޸� " << endl;
}
void showPeo(Addressbooks* ps,int ret)
{
	cout << "������" << ps->personArray[ret].m_Name << "\t";
	cout << "�Ա�" << (ps->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
	cout << "���䣺" << ps->personArray[ret].m_Age << "\t";
	cout << "�ֻ����룺" << ps->personArray[ret].m_Phone << "\t";
	cout << "��ַ��" << ps->personArray[ret].m_Addr << endl;
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
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		cout << "������������" << endl;
		cin >> ps->personArray[ps->m_Size].m_Name;
		cout << "��ѡ���Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if ((sex == 1) || (sex == 2))
			{
				ps->personArray[ps->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룺" << endl;
		}
		cout << "���������䣺" << endl;
		cin >> ps->personArray[ps->m_Size].m_Age;
		cout << "�������ֻ����룺" << endl;
		cin >> ps->personArray[ps->m_Size].m_Phone;
		cout << "�������ַ��" << endl;
		cin >> ps->personArray[ps->m_Size].m_Addr;
		ps->m_Size++;
		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");
	}
}
void showPerson(const struct Addressbooks* ps)
{
	system("cls");
	if (ps->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->m_Size; i++)
		{
			cout << "������" << ps->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (ps->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << ps->personArray[i].m_Age << "\t";
			cout << "�ֻ����룺" << ps->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << ps->personArray[i].m_Addr << endl;
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
	cout << "������Ҫɾ������ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = isExist(ps, name);
	if (ret < 0)
	{
		cout << "Ҫɾ������ϵ�˲����ڣ�" << endl;
	}
	else
	{
		showPeo(ps, ret);
		for (int i = ret; i < ps->m_Size; i++)
		{
			ps->personArray[i] = ps->personArray[i + 1];
		}
		ps->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* ps)
{
	system("cls");
	cout << "������Ҫ���ҵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret=isExist(ps, name);
	if (ret < 0)
	{
		cout << "���޴��ˣ�" << endl;
	}
	else
	{
		cout << "������" << ps->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (ps->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << ps->personArray[ret].m_Age << "\t";
		cout << "�ֻ����룺" << ps->personArray[ret].m_Phone << "\t";
		cout << "��ַ��" << ps->personArray[ret].m_Addr << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* ps)
{
	system("cls");
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret=isExist(ps, name);
	if (ret < 0)
	{
		cout << "��������" << endl;
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
				cout << "������������" << endl;
				cin >> ps->personArray[ret].m_Name;
				cout << "�޸ĳɹ���" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				cout << "��ѡ���Ա�" << endl;
				cout << "1 -- ��" << endl;
				cout << "2 -- Ů" << endl;
				int sex = 0;
				while (1)
				{
					cin >> sex;
					if ((sex == 1) || (sex == 2))
					{
						ps->personArray[ret].m_Sex = sex;
						break;
					}
					cout << "�����������������룺" << endl;
				}
				cout << "�޸ĳɹ���" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				cout << "���������䣺" << endl;
				cin >> ps->personArray[ret].m_Age;
				cout << "�޸ĳɹ���" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				cout << "�������ֻ����룺" << endl;
				cin >> ps->personArray[ret].m_Phone;
				cout << "�޸ĳɹ���" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 5:
			{
				cout << "�������ַ��" << endl;
				cin >> ps->personArray[ret].m_Addr;
				cout << "�޸ĳɹ���" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 0:
				cout << "�˳��ɹ���" << endl;
				system("pause");
				system("cls");
				return;
			default:
				cout << "��������" << endl;
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
	cout << "��ȷ��Ҫ�����" << endl;
	cout << " 1��YES 2��NO " << endl;
	int ret = 0;
	cin >> ret;
	if (ret == 1)
	{
		ps->m_Size = 0;
		cout << "ͨѶ¼����գ�" << endl;
		system("pause");
		system("cls");
	}
	else if (ret == 2)
	{
		cout << "ȡ����գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��������" << endl;
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
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "����������������룺" << endl;
			break;
		}
	} while (input);
	system("pause");
	return 0;
}