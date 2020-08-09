#include"workManager.h"
#include"worker.h"
#include"employee.h"
#include<iostream>
using namespace std;
int flag = true;
int main()
{
		workManager wm;
		while (flag)
		{
				wm.ShowMenu();
				int choice ;
				cout << "请选择要执行的操作：" << endl;
				cin >> choice;

				switch (choice)
				{
				case 1:
						wm.InsetWorkerMessage();
						break;
				case 2:
						wm.DeleteWorkerMessage();
						break;
				case 3:
						wm.InquireWorkerMessage();
						break;
				case 4:
						wm.ModifyWorkerMessage();
						break;
				case 5:
						wm.ListAllWorkerMessage();
						break;
				case 6:
						wm.SortAllWorkerMessage();
						break;
				case 7:
						wm.ClearAllWorkerMessage();
						break;
				case 8:
						wm.Exit();
						break;
				default:
						system("cls");
						break;
				}
		}
		system("pause");
		return 0;
}