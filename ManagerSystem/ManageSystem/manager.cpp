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
		cout << "ְ����ţ�" << this->worker_id << "\t" << "ְ��������"
				<< this->worker_name << "\t" << "ְ����λ��" << this->get_Depid() << endl;
}

string manager::get_Depid()
{
		return string("����");
}
