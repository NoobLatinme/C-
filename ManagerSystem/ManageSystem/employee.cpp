#pragma once
#include "employee.h"
#include<string>
#include<iostream>
using namespace std;
employee::employee(int id, string name, int depid)
{
		this->worker_id = id;
		this->worker_name = name;
		this->worker_Depid = depid;
}

void employee::showinfo()
{
		cout << "ְ����ţ�" << this->worker_id << "\t" << "ְ��������"
				<< this->worker_name << "\t" << "ְ����λ��" << this->get_Depid() << endl;
}

string employee::get_Depid()
{
		return string("��ͨԱ��");
}
