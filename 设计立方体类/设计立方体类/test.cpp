#include<iostream>
using namespace std;

class Cube
{
public:
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}

	int CaculateS()
	{
		return 2 * (m_L*m_W + m_L*m_H + m_W*m_H);
	}
	int CaculateV()
	{
		return m_L*m_W*m_H;
	}

	bool IsSameByClass(Cube& c)
	{
		if (m_L == c.getL()&&m_W == c.getW()&&m_H == c.getH())
		{
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;
};

bool IsSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL()&&c1.getW() == c2.getW()&&c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(5);
	c1.setH(20);
	Cube c2;
	c2.setL(10);
	c2.setW(5);
	c2.setH(25);
	cout << "c1的面积为：" << c1.CaculateS() << endl;
	cout << "c2的面积为：" << c2.CaculateS() << endl;
	cout << "c1的体积为：" << c1.CaculateV() << endl;
	cout << "c2的体积为：" << c2.CaculateV()<< endl;

	bool ret1 = IsSame(c1, c2);
	bool ret2 = c1.IsSameByClass(c2);

	if (ret1)
	{
		cout << "c1,c2相同！" << endl;
	}
	else
	{
		cout << "c1,c2不同！" << endl;
	}
	if (ret2)
	{
		cout << "c1,c2相同！" << endl;
	}
	else
	{
		cout << "c1,c2不同！" << endl;
	}
	system("pause");
	return 0;
}