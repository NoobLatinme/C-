#include"worker.h"
using namespace std;
#include<string>

class employee :public  worker
{
public:
		//���Գ�ʼ��
		employee(int id, string name, int depid);
		void showinfo();
		string get_Depid();
};