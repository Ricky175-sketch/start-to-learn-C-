#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;
	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << str << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}