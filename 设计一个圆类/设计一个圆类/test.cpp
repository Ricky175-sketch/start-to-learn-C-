#include<iostream>
using namespace std;
const double PI = 3.14;
class Circle
{
	//����Ȩ��
public://����Ȩ��
	//����
	int m_r;
	//��Ϊ
	double calculateZC()//��ȡԲ���ܳ�
	{
		return 2 * PI*m_r;
	}
};

int main()
{
	//ͨ��Բ�� ����һ�������Բ������
	Circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}