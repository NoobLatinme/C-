#pragma once
#include "boss.h"
#include<string>
#include<iostream>
using namespace std;
boss::boss(int id, string name, int depid)
{
		this->worker_id = id;
		this->worker_name = name;
		this->worker_Depid = depid;
}

void boss::showinfo()
{
		cout << "职工编号：" << this->worker_id << "\t" << "职工姓名："
				<< this->worker_name << "\t" << "职工岗位：" << this->get_Depid() << endl;
}

string boss::get_Depid()
{
		return string("老板");
}

