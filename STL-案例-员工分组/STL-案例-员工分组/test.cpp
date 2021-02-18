#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<ctime>
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
using namespace std;
class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;

		v.push_back(worker);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& w)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int groupId = rand() % 3;
		w.insert(make_pair(groupId, *it));
	}
}
void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int num = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	num = m.count(MEISHU);
	index = 0;
	for (; pos !=m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	num = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker> v;
	createWorker(v);

	multimap<int, Worker> m;
	setGroup(v, m);

	showWorkerByGroup(m);
	system("pause");
	return 0;
}