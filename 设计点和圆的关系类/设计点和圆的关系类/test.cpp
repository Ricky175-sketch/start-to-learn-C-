#include"Circle.h"
#include"Point.h"
void IsInCircle(Circle& c, Point& p)
{
	int dis1 = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int dis2 = c.getR()*c.getR();
	if (dis1 == dis2)
	{
		cout << "点在圆上。" << endl;
	}
	else if (dis1 > dis2)
	{
		cout << "点在圆外。" << endl;
	}
	else
	{
		cout << "点在圆内。" << endl;
	}
}
int main()
{
	//设置圆
	Circle c;
	c.setR(10);
	Point center;//圆心
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//设置点
	Point p;
	p.setX(10);
	p.setY(10);
	IsInCircle(c, p);
	system("pause");
	return 0;
}