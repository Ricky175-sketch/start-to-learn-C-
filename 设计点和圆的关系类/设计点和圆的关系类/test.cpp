#include"Circle.h"
#include"Point.h"
void IsInCircle(Circle& c, Point& p)
{
	int dis1 = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int dis2 = c.getR()*c.getR();
	if (dis1 == dis2)
	{
		cout << "����Բ�ϡ�" << endl;
	}
	else if (dis1 > dis2)
	{
		cout << "����Բ�⡣" << endl;
	}
	else
	{
		cout << "����Բ�ڡ�" << endl;
	}
}
int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;//Բ��
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//���õ�
	Point p;
	p.setX(10);
	p.setY(10);
	IsInCircle(c, p);
	system("pause");
	return 0;
}