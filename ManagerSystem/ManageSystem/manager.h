#include"worker.h"
using namespace std;
#include<string>

class manager :public  worker
{
public:
		//���Գ�ʼ��
		manager(int id, string name, int depid);
		void showinfo();
		string get_Depid();
};