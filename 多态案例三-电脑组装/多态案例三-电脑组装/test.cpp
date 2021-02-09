#include<iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate()=0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Inel�Ĵ�������ʼ�����ˣ�" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel���ڴ�����ʼ�����ˣ�" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo�Ĵ�������ʼ�����ˣ�" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�����ˣ�" << endl;
	}
};

void test01()
{
	Computer* computer1 = new Computer(new IntelCPU, new IntelVideoCard, new IntelMemory);
	computer1->work();
	delete computer1;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard,new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test01();
	system("pause");
	return 0;
}