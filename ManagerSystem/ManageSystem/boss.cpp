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
		cout << "ְ����ţ�" << this->worker_id << "\t" << "ְ��������"
				<< this->worker_name << "\t" << "ְ����λ��" << this->get_Depid() << endl;
}

string boss::get_Depid()
{
		return string("�ϰ�");
}

