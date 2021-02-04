#include<iostream>
using namespace std;
const double PI = 3.14;
class Circle
{
	//访问权限
public://公共权限
	//属性
	int m_r;
	//行为
	double calculateZC()//获取圆的周长
	{
		return 2 * PI*m_r;
	}
};

int main()
{
	//通过圆类 创建一个具体的圆（对象）
	Circle c1;
	//给圆对象 的属性进行赋值
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}