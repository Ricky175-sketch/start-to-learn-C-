#pragma once
#include<iostream>
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#define FILENAME "empFile.txt"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	void ShowMenu();
	void ExitSystem();
	void Add_Emp();
	void save();
	int get_EmpNum();
	void init_Emp();
	void show_Emp();
	int IsExist(int id);
	void Del_Emp();
	void Mod_Emp();
	void Find_Emp();
	void Sort_Emp();
	void Clean_File();
	~WorkerManager();

	int m_EmpNum;
	Worker** m_EmpArray;
	bool m_FileIsEmpty;
	
};