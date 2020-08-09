#pragma once
#include "manager.h"
#include<string>
#include<iostream>
using namespace std;
manager::manager(int id, string name, int depid)
{
		this->worker_id = id;
		this->worker_name = name;
		this->worker_Depid = depid;
}

void manager::showinfo()
{
		cout << "职工编号：" << this->worker_id << "\t" << "职工姓名："
				<< this->worker_name << "\t" << "职工岗位：" << this->get_Depid() << endl;
}

string manager::get_Depid()
{
		return string("经理");
}
