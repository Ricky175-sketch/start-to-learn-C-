#include"MyArray.hpp"
#include<string>
void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
void test01()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 10; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "array1打印输出：" << endl;
	printIntArray(arr1);
	cout << "array1的大小：" << arr1.getSize() << endl;
	cout << "array1的容量：" << arr1.getCapacity() << endl;

	cout << "--------------------------" << endl;

	MyArray<int> arr2(arr1);
	arr2.Pop_Back();
	cout << "array2打印输出：" << endl;
	printIntArray(arr2);
	cout << "array2的大小：" << arr2.getSize() << endl;
	cout << "array2的容量：" << arr2.getCapacity() << endl;
}
class Person
{
public:
	Person(){};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};
void printPersonArray(MyArray<Person>& personArr)
{
	for (int i = 0; i < personArr.getSize(); i++) 
	{
		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
	}
}
void test02()
{
	MyArray<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);
	pArray.Push_Back(p1);
	pArray.Push_Back(p2);
	pArray.Push_Back(p3);
	pArray.Push_Back(p4);
	pArray.Push_Back(p5);
	printPersonArray(pArray);
	cout << "pArray的大小：" << pArray.getSize() << endl;
	cout << "pArray的容量：" << pArray.getCapacity() << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}